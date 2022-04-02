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
int main()
{
    Fastio;
    int n, res;
    cin >> n;
    res = n;
    bool f = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            f = 0;
            while (n % i == 0)
                n /= i;
            res /= i;
            res *= (i - 1);
        }
    }
    if (n > 1 && !f)
    {
        res /= n;
        res *= (n - 1);
    }
    if (!f)
        cout << res << endl;
    else
        cout << n-1 << endl;
}