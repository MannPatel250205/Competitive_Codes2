#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define sel set<long long>
#define srt(a) sort(a.begin(), a.end())
#define srtd(a) sort(a.begin(), a.end(), greater<int>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n, m;
bool isprime(long long n, long long m)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n) && i <= m; ++i)
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
    cin >> n >> m;

    if (n == 1)
    {
        cout << "YES" << '\n';
        return;
    }
    
    else if (m >= n)
    {
        cout << "NO" << '\n';
        return;
    }

    if (isprime(n, m))
    {
        cout << "YES" << '\n';
        return;
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
