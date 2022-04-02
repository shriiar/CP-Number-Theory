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

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int n, t, x;
    cin >> n >> t >> x;
    vi v;
    for0(i, 24) v.pb(i);
    for0(i, 24) v.pb(i);
    for0(i, 24) v.pb(i);
    bool f = 0;
    int id1, id2;
    for0(i, v.sz)
    {
        if (v[i] == n)
        {
            id1 = i;
            break;
        }
    }
    for (int i = id1; i < v.sz; i++)
    {
        if (v[i] == t)
        {
            id2 = i;
            break;
        }
    }
    f = 0;
    for (int i = id1; i < id2; i++)
    {
        if (v[i] == x)
        {
            f = 1;
            break;
        }
    }
    if (f) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}