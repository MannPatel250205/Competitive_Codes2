/**
 *    AUTHOR :- MP25
 *    DATE   :- 23/01/2024
 *    TIME   :- 11:02:44
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
long long n;
bool cmp(pal &a, pal &b){
    return a.first + a.second < b.first + b.second;
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

    vector<pal> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }

    long long d1 = 0, d2 = 0;

    for (int i = 0; i < n; i++)
    {
        sort(a.begin(), a.end(), cmp);
        if (!(i & 1))
        {
            a[n - 1 - i].first--;
            d1 += a[n - 1 - i].first;
            a[n - 1 - i].second = INT32_MIN;
            reverse(all(a));
            a.erase(a.begin());
        }

        else
        {
            a[n - 1 - i].second--;
            d2 += a[n - 1 - i].second;
            a[n - 1 - i].first = INT32_MIN;
            reverse(all(a));
            a.erase(a.begin());
        }
    }

    cout << d1 - d2 << '\n';
    return;
}

int32_t main(){
    fast;
    int z;
    cin >> z;
    while (z--)
    {
        aa_rahyo_code();
    }
    return 0;
}
