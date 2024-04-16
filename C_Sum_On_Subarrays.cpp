// Rating 1500
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
long long n, k;

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n >> k;
    long long i = 0;
    while (k > n - i)
    {
        cout << 1000 << ' ';
        k -= n - i;
        i++;
    }
    
    if (k != 0)
    {
        cout << k << ' ';
    }
    else
    {
        cout << -1 << ' ';
    }
    
    i++;

    for (int j = 0; j < k - 1; j++)
    {
        cout << -1 << ' ';
        i++;
    }
    
    while (i < n)
    {
        cout << -2 << ' ';
        i++;
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
