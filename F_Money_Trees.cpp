#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define sel set<long long>
#define pal pair<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define srtd(a) sort(a.begin(), a.end(), greater<int>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long  n, k, d, c;
bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
 
    return true;
}

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    long long n, k, count = 0;
    vel a, h;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        a.push_back(x);

        if(x > k) 
        {
            count++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        h.push_back(x);
    }

    if(count == n)
    {
        cout << 0 << endl;
        return;
    }

    long long ii = 0, jj = 0, sum = a[0], d = 1;

    for (long long i = 1; i < n; i++)
    {
        if(h[i - 1] % h[i] == 0)
        {
            sum += a[i];
            jj++;
        }
        else
        {
            ii = i;
            jj = i;
            sum = a[i];
        }

        while(sum > k && ii < jj)
        {
            sum -= a[ii];
            ii++;
        }

        if(sum > k)
        {
            ii = i + 1;
            jj = i + 1;
            if(i + 1 < n) sum = a[i + 1];
            i++;
        }
        d = max(d, abs(jj - ii + 1));
    }

    cout << d << '\n';
    return;
}

int main(){
    fast;
    int z;
    cin >> z;
    while (z--)
    {
        aa_rahyo_code();
    }
    return 0;
}
