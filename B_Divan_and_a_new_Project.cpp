#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define pal pair<long long, long long>
#define sel set<long long>
#define srt(a) sort(a.begin(), a.end())
#define srtd(a) sort(a.begin(), a.end(), greater<pair<long long, long long>>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n;
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
    cin >> n;
    vector<pal> a(n);
    vector<pal> b(n);
    long long d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    
    srtd(a);
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        d = d + (a[i].first * abs(f));
        b[i].second = f;
        b[i].first = a[i].second;
        if ((i & 1) == 0)
        {
            f = f * -1;
        }
        
        else
        {
            f = abs(f) + 1;
        }
    }
    
    srt(b);
    cout << 2 * d << '\n';
    cout << 0 << ' ';
    for (int i = 0; i < n; i++)
    {
        cout << b[i].second << ' ';
    }
    cout << '\n';
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
