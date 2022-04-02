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
    int n;
    while(cin >> n)
    {
        for(int i=2; i*i<=n; i++)
        {
            if(b[i]==1 && n%i==0)
            {
                int c = 0;
                while(n%i==0)
                {
                    n /= i;
                    c++;
                }
                cout<<i<<"^"<<c<<endl;
            }
        }
        if(n>1)
            cout<<n<<"^1"<<endl;
    }
}
