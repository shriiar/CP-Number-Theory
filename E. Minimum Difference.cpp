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
vs t;
void permute(string s, string ans)
{
    if (s.size() == 0)
    {
        t.pb(ans);
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        permute(s.substr(1), ans + s[0]);
        rotate(s.begin(), s.begin() + 1, s.end());
    }
}
signed main()
{
    Fastio;
    int n, k, id = 0, indx = 0, l = 0, gg = INT_MAX;
    cin >> n >> k;
    vector<vs> v(n + 1);
    for0(i, n)
    {
        string s, ans;
        cin >> s;
        permute(s, "");
    }
    id = t.sz / n;
    for0(i, t.sz)
    {
        if(indx <= id) 
        {
            v[l].pb(t[i]);
            indx++;
        }
        if(indx == id)
        {
            indx = 0;
            l += 1;
        }
    }
    // for0(i, n)
    // {
    //     for0(j, v[i].sz) cout << v[i][j] << " ";
    //     cout << endl << endl;
    // }
    for0(i, id)
    {
        vi res;
        for0(j, n)
        {
            int dis = stoi(v[j][i]);
            res.pb(dis);
        }
        sort(all(res));
        int mn = res[0], mx = res[res.sz - 1];
        gg = min(gg, abs(mx - mn));
    }
    cout << gg << endl;
    return 0;
}