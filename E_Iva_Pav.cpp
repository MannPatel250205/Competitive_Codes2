#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define vel vector<long long>
#define pal pair<long long, long long>
#define mal map<long long, long long>
#define sel set<long long>
#define all(a) a.begin(), a.end()
#define srt(a) sort(all(a))
#define srtd(a) sort(all(a), greater<long long>())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
using namespace __gnu_pbds;
long long n, q, x, y, ch, mid, sb;
bool cmp(pal &a, pal &b){
    if (a.first != b.first)
    {
        return (a.first >= b.first);
    }
    else
    {
        return (a.second <= b.second);
    }
}

bool isprime(long long n){
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
    int b[n][32];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 32 - 1; j >= 0; j--)
        {
            if ((a[i] & (1ll << j)) == 0)
            {
                b[i][j] = 1;
            }
            
            else
            {
                b[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 32 - 1; j >= 0; j--)
        {
            b[i][j] += b[i - 1][j];
        }
    }
    
    cin >> q;
    long long d = -1;
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        d = -1;
        x--;
        long long low = x, high = n - 1;
        while (low <= high)
        {
            ch = 0;
            mid = (low + high) / 2;
            for (int j = 32 - 1; j >= 0; j--)
            {
                sb = b[mid][j];
                if (x != 0)
                {
                    sb -= b[x - 1][j];
                }
                
                if (!sb)
                {
                    ch += (1LL << j);
                }
            }

            if (ch >= y)
            {
                d = mid;
                low = mid + 1;
            }
            
            else
            {
                high = mid - 1;
            }
        }

        if (d == -1)
        {
            cout << d << ' ';
        }
        else
        {
            cout << ++d << ' ';
        }
    }
    cout << '\n';
    return;
}

int32_t main(){
    fast;
    int z;
    cin >> z;
    while (z--)
    {
        aa_rahyo_code();
    }
    return 0;
}
