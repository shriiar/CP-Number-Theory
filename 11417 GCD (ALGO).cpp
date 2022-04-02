#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        else
        {
            int g=0, x, y;
            for(int i=1; i<n; i++)
            {
                for(int j=i+1; j<=n; j++)
                {
                    x = i;
                    y = j;
                    int z;
                    while(y!=0)
                    {
                        z = y;
                        y = x % y;
                        x = z;
                    }
                    g += x;
                }
            }
            cout<<g<<endl;
        }
    }
}
