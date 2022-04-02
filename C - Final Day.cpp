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
    int n, k;
    cin >> n >> k;
    vi v, res;
    for0(i, n)
    {
        int x, y, z, sum = 0;
        cin >> x >> y >> z;
        sum += x, sum += y, sum += z;
        v.pb(sum);
        res.pb(sum);
    }
    sort(rall(v));
    for0(i, n)
    {
        if(k == 1)
        {
            if(res[i] + 300 >= v[0]) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else if(k == n)
        {

            if(res[i] <= v[k - 1]) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else
        {
            if(res[i] + 300 < v[k - 1]) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
    return 0;
}