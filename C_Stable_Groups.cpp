#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define srtd(a) sort(a.begin(), a.end(), greater<int>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n, k, x, d = 0;
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
void code_upar_hain(){
    cin >> n >> k >> x;
    d = 0;
    long long l = 0;
    vel a(n);
    vel b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    srt(a);
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > x)
        {
            b.push_back((a[i + 1] - a[i] - 1));
        }
    }
    srt(b);
    for (; j < b.size(); j++)
    {
        if (b[j] / x > k)
        {
            break;
        }
        k = k - (b[j] / x);
    }
    cout << b.size() - j + 1 << '\n';
    return;
}

int main(){
    fast;
    code_upar_hain();
    return 0;
}
