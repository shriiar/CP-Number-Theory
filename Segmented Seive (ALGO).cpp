#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    vector <bool> b(1000006, 1);
    b[0] = 0, b[1] = 0;
    for(int i=2; i*i<=1000006; i++)
    {
        if(b[i]==1)
        {
            for(int j=i*i; j<=1000006; j+=i)
            {
                b[j] = 0;
            }
        }
    }
    long long l, r;
    while(cin >> l >> r)
    {
        for(int i=l; i<=r; i++)
        {
            if(b[i]==1)
                cout<<i<<" ";
        }
        cout<<endl;
    }
}
