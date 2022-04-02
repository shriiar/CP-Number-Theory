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
        int n, a, b, cnt = 0;
        cin >> n >> a >> b;
        cnt = (n / 2) - 1;

        vi x, y;
        vb bb(n + 2, 0);
        bb[a] = 1, bb[b] = 1;
        x.pb(a), y.pb(b);

        int id = 1;
        while(1)
        {
            if(id == b || y.sz == n / 2) break;
            if(id == a)
            {
                id += 1;
                continue;
            }
            bb[id] = 1;
            y.pb(id);
            id += 1;
        }
        for1(i, n)
        {
            if(bb[i]) continue;
            x.pb(i);
            bb[i] = 1;
        }
        int mn = *min_element(all(x)), mx = *max_element(all(y));
        if(x.sz == n / 2 && y.sz == n / 2 && mn == a && mx == b)
        {
            for0(i, x.sz) cout << x[i] << " ";
            for0(i, y.sz) cout << y[i] << " ";
            cout << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}