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
#define vv vector<vector<int>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
vb b;
vv v;
int cnt = 0;
int dfs(int n)
{
    b[n] = 1;
    int ans = 1;
    for (int i = 0; i < v[n].sz; i++)
    {
        if (!b[v[n][i]])
        {
            cnt = max(cnt, ans + dfs(v[n][i]));
        }
    }
    return 1;
}
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int p, n;
        cin >> p >> n;
        v.resize(p + 1);
        b.resize(p + 1, 0);
        for0(i, n)
        {
            int b, g;
            cin >> b >> g;
            v[b].pb(g);
            v[g].pb(b);
        }
        for1(i, p)
        {
            if (!b[i])
            {
                dfs(i);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}