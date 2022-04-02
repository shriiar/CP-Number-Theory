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
    int t;
    cin >> t;
    while (t--)
    {
        int n, mn = INT_MAX, id = 0, x = 0, y = 0;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n; i += 9) // ABC
        {
            if (s[i] == '*')
                x++;
            if (i + 1 < n && s[i + 1] == '*')
                x++;
            if (i + 5 < n && s[i + 5] == '*')
                y++;
            if (i + 6 < n && s[i + 6] == '*')
                y++;
            if (i + 7 < n && s[i + 7] == '*')
                y++;
            if (i + 8 < n && s[i + 8] == '*')
                y++;
        }
        mn = min(mn, abs(x - y));

        x = 0, y = 0;
        for (int i = 0; i < n; i += 9) // ACB
        {
            if (s[i] == '*')
                x++;
            if (i + 1 < n && s[i + 1] == '*')
                x++;
            if (i + 2 < n && s[i + 2] == '*')
                y++;
            if (i + 3 < n && s[i + 3] == '*')
                y++;
            if (i + 4 < n && s[i + 4] == '*')
                y++;
            if (i + 5 < n && s[i + 5] == '*')
                y++;
        }
        mn = min(mn, abs(x - y));

        x = 0, y = 0;
        for (int i = 0; i < n; i += 9) // BAC
        {
            if (i + 3 < n && s[i + 3] == '*')
                x++;
            if (i + 4 < n && s[i + 4] == '*')
                x++;
            if (i + 5 < n && s[i + 5] == '*')
                y++;
            if (i + 6 < n && s[i + 6] == '*')
                y++;
            if (i + 7 < n && s[i + 7] == '*')
                y++;
            if (i + 8 < n && s[i + 8] == '*')
                y++;
        }
        mn = min(mn, abs(x - y));

        x = 0, y = 0;
        for (int i = 0; i < n; i += 9) // BCA
        {
            if (i + 3 < n && s[i + 3] == '*')
                y++;
            if (i + 4 < n && s[i + 4] == '*')
                y++;
            if (i + 5 < n && s[i + 5] == '*')
                y++;
            if (i + 6 < n && s[i + 6] == '*')
                y++;
            if (i + 7 < n && s[i + 7] == '*')
                x++;
            if (i + 8 < n && s[i + 8] == '*')
                x++;
        }
        mn = min(mn, abs(x - y));

        x = 0, y = 0;
        for (int i = 0; i < n; i += 9) // CAB
        {
            if (s[i] == '*')
                y++;
            if (i + 1 < n && s[i + 1] == '*')
                y++;
            if (i + 2 < n && s[i + 2] == '*')
                y++;
            if (i + 3 < n && s[i + 3] == '*')
                y++;
            if (i + 4 < n && s[i + 4] == '*')
                x++;
            if (i + 5 < n && s[i + 5] == '*')
                x++;
        }
        mn = min(mn, abs(x - y));

        x = 0, y = 0;
        for (int i = 0; i < n; i += 9) // CBA
        {
            if (s[i] == '*')
                y++;
            if (i + 1 < n && s[i + 1] == '*')
                y++;
            if (i + 2 < n && s[i + 2] == '*')
                y++;
            if (i + 3 < n && s[i + 3] == '*')
                y++;
            if (i + 7 < n && s[i + 7] == '*')
                x++;
            if (i + 8 < n && s[i + 8] == '*')
                x++;
        }
        mn = min(mn, abs(x - y));

        cout << mn << endl;
    }
    return 0;
}