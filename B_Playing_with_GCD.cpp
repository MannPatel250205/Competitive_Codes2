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
    vel a(n + 2, 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    vel b(n + 2, 1);

    for (int i = 1; i <= n + 1; i++)
    {
        b[i] = (a[i] * a[i - 1]) / __gcd(a[i], a[i - 1]);
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (__gcd(b[i], b[i + 1]) != a[i])
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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
