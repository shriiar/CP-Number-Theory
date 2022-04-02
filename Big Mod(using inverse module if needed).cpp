#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod = 1e9 + 7
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
#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
ll bigmod(ll val, ll p, ll n)
{
    if (p == 0)
        return 1 % n;
    ll res = ((bigmod(val, p / 2, n) * bigmod(val, p / 2, n)) % n);
    if (p % 2 != 0)
        res = (res * val) % n;
    return res;
}
signed main()
{
    Fastio;
    ll val1, val2, p, n; // val1 and val2 is (val1/val2)
    cin >> val1 >> val2 >> p >> n; // val2 is represented as inverse
    cout << (val1 % n) * bigmod(val2, n - 2, n) << endl; // using inverse module
    cout << bigmod(val1, p, n) << endl; // integer without inverse
    return 0;
}