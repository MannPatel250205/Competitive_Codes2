#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define pal pair<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define srtd(a) sort(a.begin(), a.end(), greater<int>()) 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n, k, x;
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
    cin >> n >> k;
    vector<pal> a(n);
    vel b(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }
    
    srt(a);

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i].first;
    }
    
    for (int i = n - 2; i >= 0; i--)
    {
        a[i].second = min(a[i].second, a[i + 1].second);
    }

    long long d = 0;
    while (k > 0)
    {
        x = upper_bound(b.begin(), b.end(), k + d) - b.begin();

        if (x == n)
        {
            cout << "YES" << '\n';
            return;
        }
        d = d + k;
        k = k - a[x].second;
    }
    
    cout << "NO" << '\n';
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
