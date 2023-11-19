#include <bits/stdc++.h>
#define vel vector<long long>
#define pal pair<long long, long long>
#define mal map<long long, long long>
#define sel set<long long>
#define all(a) a.begin(), a.end()
#define srt(a) sort(a.begin(), a.end())
#define srtd(a) sort(a.begin(), a.end(), greater<long long>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n;
bool isprime(long long n)
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
    vel a(n);
    long long s = 0;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
        if (s < 0)
        {
            cout << "No" << '\n';
            return;
        }
        
        else if (s == 0)
        {
            i++;
            while (i < n)
            {
                if (a[i] != 0)
                {
                    cout << "No" << '\n';
                    return;
                }
                i++;
            }
            cout << "Yes" << '\n';
            return;
        }
    }
    
    if (s != 0)
    {
        cout << "No" << '\n';
        return;
    }
    
    cout << "Yes" << '\n';
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
