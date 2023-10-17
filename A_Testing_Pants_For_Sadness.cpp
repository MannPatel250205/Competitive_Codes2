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
    long long d = 0;
    long long a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        d = d + (a + (i * (a - 1)));
    }
    
    cout << d << '\n';
}

int main(){
    fast;
    code_upar_hain();
    return 0;
}
