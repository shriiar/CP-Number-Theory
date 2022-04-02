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
    ll n;
    cin >> n;
    ll ar[n + 5];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    vector<int> ans;
    while (mp.size() != 0)
    {
        map<int, int>::iterator it;
        it = mp.end();
        it--;
        int num = it->first;
        ans.push_back(num);

        for (int i = 1; i * i <= num; i++)
        {

            if (num % i == 0)
            {
                int b = i;
                int a = num / i;
                mp[b]--;
                if (mp[b] == 0)
                {
                    mp.erase(mp.find(b));
                }
                if (b != a)
                {
                    mp[a]--;
                    if (mp[a] == 0)
                    {
                        mp.erase(mp.find(a));
                    }
                }
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
