#include <bits/stdc++.h>
#define vel vector<long long>
#define pal pair<long long, long long>
#define mal map<long long, long long>
#define sel set<long long>
#define all(a) a.begin(), a.end()
#define srt(a) sort(all(a))
#define srtd(a) sort(all(a), greater<long long>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n, x;
bool isprime(long long n)
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
    long long d = 0;
    mal b;
    b[1] = 0;
    b[2] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        b[x]++;
    }
    
    for (auto &it : b)
    {
        x = it.second;
        d = d + ((x * (x - 1)) / 2);
    }
    
    d = d + (b[1] * b[2]);
    
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
