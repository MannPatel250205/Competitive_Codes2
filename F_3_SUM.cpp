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
long long n, x;
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
    mal a;
    vel b;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x = x % 10;
        if (a.count(x))
        {
            if (a[x] >= 3)
            {
                continue;
            }

            else
            {
                a[x]++;
            }
        }

        else
        {
            a[x]++;
        }
    }

    for (auto &it : a)
    {
        for (int i = 0; i < it.second; i++)
        {
            b.push_back(it.first);
        }
    }

    for (int i = 0; i < b.size() - 2; i++)
    {
        for (int j = i + 1; j < b.size() - 1; j++)
        {
            for (int k = j + 1; k < b.size(); k++)
            {
                if ((b[i] + b[j] + b[k]) % 10 == 3)
                {
                    cout << "YES" << '\n';
                    return;
                }
            }
        }
    }

    cout << "NO" << '\n';
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
