/**
 *    AUTHOR :- MP25
 *    DATE   :- 12/05/2024
 *    TIME   :- 20:00:41
**/

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
/****************                NEVER MIND THIS CODE                ****************/
using namespace std;
using namespace __gnu_pbds;
long long n;
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
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

long long findx(long long n, long long k){
    long long d = ((n * n) - (k * k));
    d = sqrt(d);
    return d;
}

bool check_sqre(long long x1, long long n, long long y){
    return ((x1 * x1) + (y * y) == n * n);
}

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n;

    long long ans = 0, x1 = 0, x2 = 0;
    
    for (int i = 1; i <= n; i++)
    {
        x1 = findx(n, i), x2 = findx(n + 1,  i);
        ans += (x2 - x1);
        if (check_sqre(x1, n, i))
        {
            ans++;
        }

        if (check_sqre(x2, n + 1, i))
        {
            ans--;
        }
    }
    
    ans *= 4;

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
