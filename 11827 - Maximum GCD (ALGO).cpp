#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a[1005];
    cin >> t;
    getchar();
    string s;
    while(t--)
    {
        getline(cin, s);
        stringstream ss (s);
        int k = 0;
        while(ss >> a[k])
            k++;
        int x, y, z, g = 0;
        for(int i=0; i<k-1; i++)
        {
            for(int j=i+1; j<k; j++)
            {
                x = a[i];
                y = a[j];
                while(y!=0)
                {
                    z = y;
                    y = x % y;
                    x = z;
                }
                g = max(g, x);
            }
        }
        cout<<g<<endl;
    }
}
