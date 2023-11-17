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
long long n;
mal m;
void isprime(long long n)
{
    long long k = n;
    if (n < 2)
    {
        return;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        while(k % i == 0)
        {
            if (m.count(i))
            {
                m[i]++;
            }
            
            else
            {
                m[i] = 1;
            }
            
            k = k / i;
        }
    }

    if(k > 1)
    {
        m[k]++;
    }

    return;
}

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n;
    vel a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    srt(a);

    for (int i = 0; i < n; i++)
    {
        isprime(a[i]);
    }
    
    for (auto &it : m)
    {
        if (it.second % n != 0)
        {
            cout << "NO" << '\n';
            m.clear();
            return;
        }
    }
    cout << "YES" << '\n';
    m.clear();
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
