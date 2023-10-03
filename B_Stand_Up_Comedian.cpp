#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long a, b, c, d;

/****************            Ha bas, aa rahyo code            ****************/
void code_upar_hain(){
    cin >> a >> b >> c >> d;

    long long w = a;
    w = w + (2 * min(b, c));
    long long aa = a;
    long long diff = abs(b - c);

    if (a == 0)
    {
        cout << 1 << '\n';
        return;
    }

    if (aa > diff)
    {
        w = w + diff;
        aa = aa - diff;
    }
    
    else if (aa < diff)
    {
        cout << w + aa + 1 << '\n';
        return;
    }
    
    else if (aa == diff)
    {
        if (d > 0)
        {
            cout << w + aa + 1 << '\n';
            return;
        }
        cout << w + aa << '\n';
        return;
    }
    
    if (d > aa)
    {
        cout << w + aa + 1 << '\n';
        return;
    }
    
    else
    {
        cout << w + d << '\n';
        return;
    }
    
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
