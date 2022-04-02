#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1000000007
#define fr first
#define se second

#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vvi vector <vector<int>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k, ans = 0, cnt = 0;
        cin >> n >> k;
        cnt += (((n * (n + 1)) / 2) + ((n - 1) * n) / 2);
        if(k >= cnt)
        {
            cout << n + (n - 1) << endl;
            continue;
        }
        else if(k <= ((n * (n + 1)) / 2))
        {
            ll l = 1, r = n, mid = (l + r) / 2;
            while(l <= r)
            {
                if(l == r || k == (mid * (mid + 1) / 2)) 
                {
                    ans += mid;
                    break;
                }
                else if(k < (mid * (mid + 1) / 2))
                {
                    if(k > (mid * (mid - 1) / 2)) r = mid;
                    else r = mid - 1;
                    mid = (l + r) / 2;
                }
                else if(k > (mid * (mid + 1)/ 2))
                {
                    l = mid + 1;
                    mid = (l + r) / 2;
                }
            }
            cout << ans << endl;
        }
        else if(k > ((n * (n + 1)) / 2))
        {
            ans += n;
            ll l = 1, r = n - 1, mid = (l + r) / 2, dis, val;
            val = k;
            k = cnt - k;
            while(l <= r)
            {
                if(l == r || k == (mid * (mid + 1) / 2)) 
                {
                    dis = mid;
                    break;
                }
                else if(k < (mid * (mid + 1) / 2))
                {
                    if(k > (mid * (mid - 1) / 2)) r = mid;
                    else r = mid - 1;
                    mid = (l + r) / 2;
                }
                else if(k > (mid * (mid + 1)/ 2))
                {
                    l = mid + 1;
                    mid = (l + r) / 2;
                }
            }
            ll dis1 = dis * (dis + 1) / 2;
            if(cnt - dis1 != val) cout << n + (n - dis) << endl;
            else cout << n + (n - dis) - 1 << endl;
        }
    }
    return 0;
}