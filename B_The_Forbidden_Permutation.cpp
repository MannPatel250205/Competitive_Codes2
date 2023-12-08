/**
 *    AUTHOR :- MP25
 *    DATE   :- 07/12/2023
 *    TIME   :- 21:55:36
**/

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
long long n, m, d, x;
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
    cin >> n >> m >> d;
    vel a(n), b(m);
    unordered_map<long long, long long> c;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[a[i]] = i;
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long long dd = INT16_MAX;
    for (int i = 0; i < m - 1; i++)
    {
        x = c[b[i + 1]] - c[b[i]];
        if (c[b[i]] > c[b[i + 1]] || x > d)
        {
            dd = 0;
            break;
        }
        dd = min(dd, x);
        
        long long f = d - x + 1;
        long long h = (c[b[i]] - 1) + (n - c[b[i + 1]]);

        if (h >= f)
        {
            dd = min(dd, f);
        }
    }
    
    cout << dd << '\n';
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
