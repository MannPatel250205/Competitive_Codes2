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
int n, x, temp;
bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
 
    return true;
}

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n;
    mai a;
    set<int> b;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (a.count(x))
        {
            a[x]++;
        }
        
        else
        {
            a[x] = 1;
        }
        
        b.insert(x);
        b.insert(x + 1);
    }
    
    int last = 0, d = 0;

    for (auto &it : b)
    {
        temp = a[it];
        d = d + max(0, temp - last);
        last = temp;
    }
    
    cout << d << '\n';
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
