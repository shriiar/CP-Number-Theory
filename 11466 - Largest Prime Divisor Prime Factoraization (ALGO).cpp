#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <bool> b(10000003, 1);
    b[0] = 0, b[1] = 0;
    for(int i=2; i*i<=10000003; i++)
    {
        if(b[i]==1)
        {
            for(int j=i*i; j<=10000003; j+=i)
            {
                b[j] = 0;
            }
        }
    }
    unsigned long long n;
    while(cin >> n)
    {
        if(n==0)
            break;
        else if(n<0)
            n *= -1;
        vector <int> v;
        int x = 0;
        for(int i=2; i*i<=n; i++)
        {
            if(b[i]==1 && n%i==0)
            {
                while(n%i==0)
                {
                    n /= i;
                    if(x!=i)
                    {
                        v.push_back(i);
                        x = i;
                    }
                }
            }
        }
        if(v.size()!=0)
        {
            if(n>1 && x!=n)
                v.push_back(n);
            if(v.size()<=1)
                cout<<"-1"<<endl;
            else
                cout<<v[v.size()-1]<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}
