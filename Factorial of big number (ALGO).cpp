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
        int c = 0, r;
        vector <int> v;
        v.push_back(1);
        for(; n>=2; n--)
        {
            r = 0;
            for(int i=0; i<=c; i++)
            {
                r = (v[i] * n) + r;
                v[i] = r % 10;
                r /= 10;
            }
            while(r!=0)
            {
                c++;
                v[c] = r % 10;
                r /= 10;
            }
        }
        for(int i=c; i>=0; i--)
            cout<<v[i];
        v.clear();
        cout<<endl;
    }
}
