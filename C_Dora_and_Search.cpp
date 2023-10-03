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
int isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
 
    return -1;
}

/****************            Ha bas, aa rahyo code            ****************/
void code_upar_hain(){
    cin >> n;
    bool f = false;
    vel a(n);
    int c = 0, d = n - 1, mn = 1, mx = n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (c < d)
    {
        if (a[c] == mn)
        {
            mn++;
            c++;
        }
        
        else if (a[c] == mx)
        {
            mx--;
            c++;
        }
        
        else if (a[d] == mn)
        {
            mn++;
            d--;
        }
        
        else if (a[d] == mx)
        {
            mx--;
            d--;
        }
        
        else
        {
            f = true;
            c++;
            d++;
            break;
        }
        
    }
    if (f)
    {
        cout << c << " " << d << '\n';
        return;
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
