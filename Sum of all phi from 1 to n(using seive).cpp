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
vb b(1e7 + 3, 1);
vi pr;
void seive()
{
    for (int i = 2; i <= b.sz; i++)
    {
        if (b[i])
        {
            pr.pb(i);
            for (int j = i * i; j <= b.sz; j += i)
                b[j] = 0;
        }
    }
}
int phi(int n)
{
    int res = n;
    for (int i = 0; i < pr.sz; i++)
    {
        if (pr[i] > n)
            break;
        if (n % pr[i] == 0)
        {
            while (n % pr[i] == 0)
                n /= pr[i];
            res /= pr[i];
            res *= (pr[i] - 1);
        }
    }
    return res;
}
signed main()
{
    Fastio;
    int t;
    cin >> t;
    seive();
    while (t--)
    {
        ll n, sum_phi_of_1_to_n = 0;
        cin >> n;
        for1(i, n)
        {
            if (n % i == 0)
                sum_phi_of_1_to_n += (i * (phi(n / i)));
        }
        cout << sum_phi_of_1_to_n << endl; // sum of phi from 1 to n
        cout << n * (phi(n) / 2) << endl; // sum of gcd 1 from 1 to n
    }
    return 0;
}