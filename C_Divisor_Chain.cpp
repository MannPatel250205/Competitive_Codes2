#include <bits/stdc++.h>
#define vei vector<int>
#define vel vector<long long>
#define mai map<int, int>
#define mal map<long long, long long>
#define sel set<long long>
#define srt(a) sort(a.begin(), a.end())
#define srtd(a) sort(a.begin(), a.end(), greater<int>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
long long x, nr;
sel s;
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
bool bit(int mask, int pos)
{
    return (mask >> pos) & 1;
}

void aa_rahyo_code()
{
    cin >> x;
    long long p;
    vel ans;
    ans.push_back(x);
    for (int i = 0;; ++i)
    {
        if (bit(x, i))
        {
            if (x == (1 << i))
            {
                p = i;
                break;
            }
            x -= (1 << i);
            ans.push_back(x);
        }
    }
    while (p > 0)
    {
        x -= (1 << (p - 1));
        ans.push_back(x);
        --p;
    }

    cout << ans.size() << "\n";
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << "\n";
}

int main()
{
    long long f = 1;

    for (int i = 0; i < 30; i++)
    {
        f = f * 2;
        s.insert(f);
    }

    fast;
    int z;
    cin >> z;
    while (z--)
    {
        aa_rahyo_code();
    }
    return 0;
}
