/**
 *    AUTHOR :- MP25
 *    DATE   :- 30/11/2023
 *    TIME   :- 00:14:54
**/

#include <bits/stdc++.h>
#define vel vector<long long>
#define pal pair<long long, long long>
#define mal map<long long, long long>
#define sel set<long long>
#define all(a) a.begin(), a.end()
#define srt(a) sort(all(a))
#define srtd(a) sort(all(a), greater<long long>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long n, k;
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
    cin >> n >> k;
    vel a(n), b(n), c(n);
    sel arr[2 * n + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        arr[a[i]].insert(i);
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    srt(c);
    srt(b);
    vel ans, ans2(n);
    for (int i = k; i < n; i++)
    {
        ans.push_back(b[i]);
    }
    for (int i = 0; i < k; i++)
    {
        ans.push_back(b[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] > ans[i])
            cnt++;
    }
    if (cnt != k)
    {
        cout << "NO" << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        ans2[*arr[c[i]].begin()] = ans[i];
        arr[c[i]].erase(arr[c[i]].begin());
    }
    cout << "YES" << '\n';
    for (auto it : ans2)
    {
        cout << it << " ";
    }
    cout << '\n';
}

int main()
{
    fast;
    int z;
    cin >> z;
    while (z--)
    {
        aa_rahyo_code();
    }
    return 0;
}
