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
long long n, x;
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
    vel a, b;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (((i + 1) & 1) == 1)
        {
            b.push_back(x);
        }
        
        else
        {
            a.push_back(x);
        }
        
    }
    
    srtd(a);
    srtd(b);

    long long d = INT32_MIN;
    long long s = 0;
    for (int i = 0; i < a.size(); i++)
    {
        s = s + a[i];
        d = max(d, s);
    }
    
    s = 0;

    for (int i = 0; i < b.size(); i++)
    {
        s = s + b[i];
        d = max(d, s);
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
