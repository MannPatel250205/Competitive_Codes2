#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n;

void solve(){
    cin >> n;

    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    
    if ((n & 1) == 1)
    {
        cout << -1 << '\n';
        return;
    }
    
    cout << n << " ";

    for (int i = 1; i < n; i++)
    {
        if ((i & 1) == 1)
        {
            cout << n - i << " ";
        }
        
        else
        {
            cout << i << " ";
        }
    }
    cout << '\n';
    return;
}

int main(){
    fast;
    int z;
    cin >> z;
    while (z--)
    {
        solve();
    }
    return 0;
}
