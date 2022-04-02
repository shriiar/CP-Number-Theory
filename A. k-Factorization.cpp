#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define mp make_pair
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define vplb vector<pair<long long, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define iton (ll i = 0; i < n; i++)
#define seti set<int>
#define setl set<long long>
#define mapl map<long long, long long>
#define mapi map<int, int>
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int seive(vector<int> &v, int n, int k)
{
    vb b(1e5 + 3, 1);
    b[0] = 0, b[1] = 0;
    for (int i = 2; i * i <= b.sz; i++)
    {
        if (b[i])
        {
            for (int j = i * i; j <= b.sz; j += i)
                b[j] = 0;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (b[i] && n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                v.pb(i);
                k--;
                if (k == 1)
                {
                    if (n != 1)
                        v.pb(n);
                    break;
                }
            }
        }
        if (k == 1)
            break;
    }
    if (k == 1)
        return 1;
    else
        return 0;
}
int main()
{
    Fastio;
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << n << endl;
        return 0;
    }
    vi v;
    if (seive(v, n, k))
    {
        if (v.sz == k)
        {
            for (int i = 0; i < v.sz; i++)
                cout << v[i] << " ";
            cout << endl;
            return 0;
        }
        else
            goto FALSE;
    }
FALSE:
    cout << -1 << endl;
    return 0;
}