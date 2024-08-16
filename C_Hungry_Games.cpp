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
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
/****************                NEVER MIND THIS CODE                ****************/
using namespace std;
using namespace __gnu_pbds;
long long n, x;
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

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
        {
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}

bool isprime(long long n){
    if (n < 2)
    {
        return false;
    }
    for (long long i = 2; i <= sqrt(n); i++)
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
    cin >> n >> x;
    vel a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vel pre(n + 1, 0ll);
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i] + a[i];
    }
    
    vel dp(n + 2, 0ll);
    long long ans = 0ll;
    for (int i = n - 1; i >= 0; i--)
    {
        long long indx = upper_bound(all(pre), pre[i] + x) - pre.begin();
        
        dp[i] = dp[indx] + (indx - i - 1);
    }

    for (int i = 0; i < n + 1; i++)
    {
        ans += dp[i];
    }

    cout << ans << '\n';
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
