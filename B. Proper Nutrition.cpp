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
    int n, a, b, mult = 1, dis, x, y;
    cin >> n >> a >> b;
    bool f = 0;
    if (n % a == 0)
        cout << "YES" << endl
             << n / a << " " << 0 << endl;
    else if (n % b == 0)
        cout << "YES" << endl
             << 0 << " " << n / b << endl;
    else
    {
        while (1)
        {
            if (a * mult > n)
                break;
            dis = a * mult;
            mult++;
            if ((n - dis) % b == 0)
            {
                f = 1;
                x = dis / a;
                y = (n - dis) / b;
                break;
            }
        }
        if (!f)
        {
            mult = 1;
            while (1)
            {
                if (b * mult > n)
                    break;
                dis = b * mult;
                mult++;
                if ((n - dis) % a == 0)
                {
                    f = 1;
                    x = dis / b;
                    y = (n - dis) / a;
                    break;
                }
            }
        }
        if (f)
            cout << "YES" << endl
                 << x << " " << y << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}