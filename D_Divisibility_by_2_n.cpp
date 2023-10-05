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

int count2(long long d){
    int g = 0;
    for (int i = 0; ; i++)
    {
        if ((d & 1) == 0)
        {
            g++;
        }
        else
        {
            break;
        }
        d = d / 2;
    }
    return g;
}

/****************            Ha bas, aa rahyo code            ****************/
void code_upar_hain(){
    cin >> n;
    vel a(n);
    vei c;
    long long b = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int x = count2(a[i]);
        b = b + x;
        int h = count2(i + 1);
        if (h > 0)
        {
            c.push_back(h);
        }
        
    }
    
    srt(c);

    // cout << b << '\n';
    if (b >= n)
    {
        cout << "0" << '\n';
        return;
    }
    int f = c.size();
    for (int i = f - 1; i >= 0; i--)
    {
        b = b + c[i];
        d++;
        if (b >= n)
        {
            cout << d << '\n';
            return;
        }
        
    }
    
    cout << -1 << '\n';
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
