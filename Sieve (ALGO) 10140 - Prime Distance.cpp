#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <bool> b(1000003, 1);
    b[0] = 0, b[1] = 0;
    for(int i=2; i*i<=1000003; i++)
    {
        for(int j=i*i; j<=1000003; j+=i)
        {
            b[j] = 0;
        }
    }
    int n, m;
    while(cin >> n >> m)
    {
        vector <int> v;
        v.push_back(0);
        for(int i=n; i<=m; i++)
        {
            if(b[i]==1)
                v.push_back(i);
        }
        if(v.size()<=2)
            cout<<"There are no adjacent primes."<<endl;
        else if(v.size()==3)
            cout<<v[1]<<","<<v[2]<<" are closest, "<<v[1]<<","<<v[2]<<" are most distant."<<endl;
        else
        {
            int x, y, z, p, q, r, s;
            x = v[1], y = v[2], z = v[2] - v[1], s = v[2] - v[1];
            for(int i=2; i<v.size()-1; i++)
            {
                p = v[i+1] - v[i];
                if(p<z)
                {
                    x = v[i];
                    y = v[i+1];
                    z = p;
                }
                else if(p>s)
                {
                    q = v[i];
                    r = v[i+1];
                    s = p;
                }
            }
            cout<<x<<","<<y<<" are closest, "<<q<<","<<r<<" are most distant."<<endl;
        }
    }
}
