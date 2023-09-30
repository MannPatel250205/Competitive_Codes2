#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define srt(a) sort(a.begin(), a.end())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
int n, m, a[500][500];
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

void solve(){
    cin >> n >> m;
    int s = 0;

    string b;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        for (int j = 0; j < m; j++)
        {
            a[i][j] = b[j] - '0';
            s = s + a[i][j];
        }    
    }
    
    if (!s)
    {
        cout << "0" << '\n';
        return;
    }
    
    int mini = INT16_MAX;

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < m - 1; j++) 
        {
            int c = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
            if (c == 0) 
            {
                continue;
            }

            mini = min(mini, max(1, c - 1));    
        }
    }
    
    cout << s + 1 - mini << '\n';
}

int main(){
    fast;
    int z;
    cin >> z;
    while (z--)
    {
        solve();
    }
    return 0;
}
