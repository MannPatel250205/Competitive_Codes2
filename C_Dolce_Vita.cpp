#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n, sum, x;
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

/****************            Code dekhna hai, aajao dikhadunga            ****************/
void aa_rahyo_code(){
    cin >> n >> x;
    sum = 0;
    vel a(n);
    long long c = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    
    srt(a);

    for (int i = 0; i < n; i++)
    {
        if (x - sum >= 0)
        {
            int e = ((x - sum) / (n - i)) + 1;
            c = c + e;
            d = d + (e * (n - i));
            sum = sum + (e * (n - i));
        }
        
        // d = d + (n * ((x - sum - i) / n + 1));
        sum = sum - (a[n - 1 - i] + c);
    }
    
    cout << d << '\n';
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
