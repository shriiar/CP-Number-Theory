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
        ll x, y, val = 0, a = -1, b = -1;
        cin >> x >> y;
        val += x + y;
        val /= 2;
        bool f = 0;
        for0(i, val + 1)
        {   
            ll dis = val - i;
            ll yy1 = abs(x - i) + abs(y - dis);
            ll yy2 = abs(x - dis) + abs(y - i);
            if(yy1 == val)
            {
                f = 1;
                a = i;
                b = dis;
                break;
            }
            else if(yy2 == val)
            {
                f = 1;
                a = dis;
                b = i;
                break;
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}