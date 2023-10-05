#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n, q, x;

/****************            Ha bas, aa rahyo code            ****************/
void code_upar_hain(){
    cin >> n >> q;
    long long f = INT_MIN; 
    vel a(n), b, c;
    x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x = x + a[i];
        b.push_back(x);
        f = max(f, a[i]);
        c.push_back(f);
    }
   
    for (int i = 0; i < q; i++)
    {
        long long e, g;
        cin >> e;

        if (e < c[0])
        {
            cout << "0 ";
        }
        
        else
        {
            g = upper_bound(c.begin(), c.end(), e) - c.begin();
        
            cout << b[g - 1] << " ";
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
        code_upar_hain();
    }
    return 0;
}
