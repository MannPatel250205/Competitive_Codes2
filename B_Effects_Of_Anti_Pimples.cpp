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
long long n;
const long long cc = 998244353;
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

void maxsum(long long n, vel &a, long long nm){
    for (int i = n; i <= nm; i += n)
    {
        a[n] = max(a[i], a[n]);
    }
    return;
}

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n;
    vel a(n + 1, 0);
    long long d = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        maxsum(i, a, n);
    }
    
    srt(a);
    long long m = 1;
    for (int i = 1; i < n + 1; i++)
    {
        d += (((a[i] % cc) * m) % cc);
        m *= 2;
        d %= cc, m %= cc;
    }
    
    cout << d << '\n';
    return;
}

int32_t main(){
    fast;
    aa_rahyo_code();
    return 0;
}
