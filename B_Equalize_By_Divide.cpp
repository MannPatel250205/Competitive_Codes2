#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define pail pair<long long, long long>
#define srt(a) sort(a.begin(), a.end())
// #define srtd(a) sort(a.begin(), a.end(), greater<int>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n;

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n;

    pail a[n];
    pail b[3000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    
    sort(a, a + n);
    
    // cout << a[0].first << " " << a[0].second;
    if (a[0].first == 1 && a[n - 1].first != 1)
    {
        cout << -1 << '\n';
        return;
    }
    int d = 0;
    while (a[0].first != a[n - 1].first)
    {
        b[d].first = a[n - 1].second;
        b[d].second = a[0].second;
        if (a[n - 1].first % a[0].first == 0)
        {
            a[n - 1].first = a[n - 1].first / a[0].first;
        }
        
        else
        {
            a[n - 1].first = (a[n - 1].first / a[0].first) + 1;
        }
        
        sort(a, a + n);
        d++;
    }
    
    cout << d << '\n';

    for (int i = 0; i < d; i++)
    {
        cout << b[i].first << " " << b[i].second << '\n';
    }
    
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
