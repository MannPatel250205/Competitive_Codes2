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

void solve()
{
    cin >> n;
    long long d = 0;
    for (int i = 1; i <= n; i++)
    {
        long long temp = 0, maxi = INT16_MIN;

        for (long long j = 1; j < i; j++)
        {
            temp = temp + (j * j);
            maxi = max(maxi, j * j);
        }

        int count = 1;

        for (long long j = i; j <= n; j++)
        {
            temp = temp + (j * (n - j + i));
            maxi = max(maxi, j * (n - j + i));
        }

        temp = temp - maxi;

        d = max(d, temp);
    }

    cout << d << '\n';
    return;
}

int main()
{
    fast;
    int z;
    cin >> z;
    while (z--)
    {
        solve();
    }
    return 0;
}
