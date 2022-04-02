#include <bits/stdc++.h>
using namespace std;
int main()
{
    // primality test (ALGO) finding primary number //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int y = 0;
    bool f = true;
    if(n==2 && m==3)
        cout<<"YES"<<endl;
    else
    {
        for(int i=n+1; i<=m; i++)
        {
            for(int j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    f = false;
                    break;
                }
                else if(i%j!=0)
                {
                    y = i;
                    f = true;
                }
            }
            if(f==true)
            {
                if(y==m)
                {
                    cout<<"YES"<<endl;
                    f = true;
                    break;
                }
                else
                {
                    cout<<"NO"<<endl;
                    f = true;
                    break;
                }
            }
        }
        if(f==false)
            cout<<"NO"<<endl;
    }
}
