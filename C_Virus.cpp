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
long long n, m;

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n >> m;

    vel a(m);

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    
    srt(a);
    vel b;

    for (int i = 0; i < m - 1; i++)
    {
        b.push_back(a[i + 1] - a[i] - 1);
    }
    
    b.push_back(a[0] + n - a[m - 1] - 1);
    srtd(b);
    int f = 0, d = 0;
    for (auto &it : b)
    {
        long long x = it;
        x = x - (f * 2);
        if (x <= 0)
        {
            break;
        }
        
        d = d + (x - 1);

        if (x == 1)
        {
            d++;
        }
        f = f + 2;
    }
    
    cout << n - d << '\n';
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
