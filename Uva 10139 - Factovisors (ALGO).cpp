#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mod = 1e9+7;
    int n, m;
    while(cin >> n >> m)
    {
        int f = 1;
        for(int i=1; i*i<=n; i++)
        {
            f = (f * i) % mod;
        }
        m = m % mod;
        if(f%m==0)
            cout<<m<<" divides "<<n<<"!"<<endl;
        else
            cout<<m<<" does not divide "<<n<<"!"<<endl;
    }
}
