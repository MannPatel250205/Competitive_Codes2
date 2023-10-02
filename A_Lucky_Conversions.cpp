#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;

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
    string a, b;
    cin >> a >> b;
    int d = 0, c = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] == '4')
            {
                c++;
            }
            
            else
            {
                d++;
            }
            
        }
        
    }
    
    cout << max(c, d) << '\n';
}

int main(){
    fast;
    code_upar_hain();
    return 0;
}
