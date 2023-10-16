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
pair<long long, long long> b[200004];
long long n, k, m;

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n >> k;
    long long d = 0;
    if (k >= 7 && k >= n)
    {
        cout << 0 << '\n';
        return;
    }
    
    long long x = b[k - 1].first, y = b[k - 1].second;

    for (int i = 0; i < n; i++)
    {
        m = n - (x * i);
        if (m % y == 0 && m / y > 0 && m / y >= i)
        {
            d++;
        }
        
    }
    
    cout << d << '\n';
    return;
}

int main(){
    fast;

    int z;
    cin >> z;
    b[0] = {1, 0};
    b[1] = {0, 1};
    b[2] = {1, 1};

    for (int i = 1; i < 200001; i++)
    {
        b[i].first = b[i - 1].second;
        b[i].second = b[i - 1].second + b[i - 1].first;
    }
    
    while (z--)
    {
        aa_rahyo_code();
    }
    return 0;
}
