#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;

/****************            Ha bas, aa rahyo code            ****************/
void code_upar_hain(){
    int n, k;
    vei a(51, 0);
    int l = 0, r = 54;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int le, rr;
        cin >> le >> rr;

        if (le <= k && k <= rr)
        {
            l = max(l, le);
            r = min(r, rr);
        }
    }
    
    if (l == r)
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
    return;
}

int main(){
    fast;
    int z;
    cin >> z;
    while (z--)
    {
        code_upar_hain();
    }
    return 0;
}
