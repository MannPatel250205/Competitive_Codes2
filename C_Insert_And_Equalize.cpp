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
bool cmp(pal &a, pal &b){
    if (a.first != b.first)
    {
        return (a.first >= b.first);
    }
    else
    {
        return (a.second <= b.second);
    }
}

bool isprime(long long n){
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
    mal c;
    vel a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[a[i]] = 1;
    }
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    
    srt(a);
    
    long long k = a[n - 1] - a[0];

    for (int i = 1; i < n - 1; i++)
    {
        k = __gcd(k, a[i] - a[i - 1]);
    }
    
    long long d = 0;

    for (int i = 0; i < n - 1; i++)
    {
        x = a[n - 1] - a[i];
        d = d + (x / k);
    }

    int i = 1;
    
    for (i = 1; i <= n; i++)
    {
        x = a[n - 1] - (i * k);
        if (c.count(x))
        {
            continue;
        }
        
        else
        {
            break;
        }
    }
    
    cout << d + i << '\n';
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
