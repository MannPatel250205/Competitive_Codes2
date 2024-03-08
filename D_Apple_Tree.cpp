/**
 *    AUTHOR :- MP25
 *    DATE   :- 05/01/2024
 *    TIME   :- 21:30:48
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
/***************                NEVER MIND THIS CODE                ***************/
using namespace std;
using namespace __gnu_pbds;
long long n, x, y, q;
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
void dfs(long long node, long long prev, vel &d, vel a[]){
    bool ff = false;
    for (auto &it : a[node])
    {
        if (it != prev)
        {
            ff = true;
            dfs(it, node, d, a);
            d[node] += d[it];
        }
    }

    if (!ff)
    {
        d[node] = 1;
    }
}
/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n;
    vel a[n];
    
    vel d(n, 0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        a[--x].push_back(--y);
        a[y].push_back(x);
    }
    cin >> q;

    dfs(0, INT16_MIN, d, a);

    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        --x, --y;
        
        cout << d[x] * d[y] << '\n';
    }
    
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