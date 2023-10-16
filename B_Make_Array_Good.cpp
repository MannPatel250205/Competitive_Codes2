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
long long n, x = 1;
set<long long> s;

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n;
    vel a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << n << '\n';

    for (int i = 0; i < n; i++)
    {
        for (auto &it : s)
        {
            if (it >= a[i])
            {
                a[i] = it - a[i];
                break;
            }
        }
        cout << i + 1 << " " << a[i] << '\n';
    }
    
    return;
}

int main(){
    fast;
    int z;
    cin >> z;
    s.insert(1);
    for (int i = 1; i < 32; i++)
    {
        x = x * 2;
        s.insert(x);
    }
    
    while (z--)
    {
        aa_rahyo_code();
    }
    return 0;
}
