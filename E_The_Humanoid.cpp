// Rating(1500)
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
long long n, h;
long long astronaut(vel &a, vel &b, long long h){
    long long i = 0, j = 0;

    for (; i < n ;)
    {
        if (h > a[i])
        {
            h += (a[i] / 2);
            i++;
            continue;
        }
        
        else
        {   
            while (h <= a[i] && j < 3)
            {
                h *= b[j];
                j++;
            }

            if (j < 3)
            {
                continue;
            }
        }
        
        if (j >= 3 && h <= a[i])
        {
            break;
        }
    }
    return i;
}

/****************            Ha bas, aa rahyo code            ****************/
void aa_rahyo_code(){
    cin >> n >> h;
    vel a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    srt(a);
    long long ans1 = 0, ans2 = 0, ans3 = 0, dd = 0;
    vel b = {3, 2, 2}, c = {2, 2, 3}, d = {2, 3, 2};
    ans1 = astronaut(a, b, h);
    ans2 = astronaut(a, c, h);
    ans3 = astronaut(a, d, h);

    dd = max(ans1, ans2);

    cout << max(dd, ans3) << '\n';
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
