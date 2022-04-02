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
    vi v;
    for1(i, 1000)
    {
        int n = i;
        string s, res;
        while(n) 
        {
            s += (n%2) + '0';
            n /= 2;
        }
        res = s;
        reverse(all(res));
        if(s == res) v.pb(i);
    }
    while(t--)
    {
        int n;
        cin >> n;
        vi res;
        while(1)
        {
            if(n == 0) break;
            int id = -1;
            for0(i, v.sz)
            {
                if(v[i] > n) break;
                else if(v[i] < n) id = i;
            }
            if(id != -1)
            {
                res.pb(v[id]);
                n -= v[id];
            }
            else
            {
                while(n--) 
                {
                    res.pb(1);
                }
                break;
            }
        }
        cout << res.sz << endl;
        for0(i, res.sz) cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}