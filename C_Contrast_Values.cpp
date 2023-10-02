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
    int d = 1;
    vel a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long k = a[0];
    
    for (int i = 1; i < n;)
    {
        if (a[i] > k)
        {
            // k = a[i];
            d++;
            // i++;
            while (a[i] >= k && i < n)
            {
                k = a[i];
                i++;
            }
        }
        
        else if (a[i] < k)
        {
            // k = a[i];
            d++;
            // i++;
            while (a[i] <= k && i < n)
            {
                k = a[i];
                i++;
            }
        }

        else if (a[i] == k)
        {
            // k = a[i];
            while (a[i] == k && i < n)
            {
                k = a[i];
                i++;
            }
        }
        
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
        code_upar_hain();
    }
    return 0;
}
