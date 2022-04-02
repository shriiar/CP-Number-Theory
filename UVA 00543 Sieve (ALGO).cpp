#include <bits/stdc++.h>
using namespace std;
int main()
{
    // sieve (ALGO) for finding prime 1 to 10^6 //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector <bool> b(1000003, 1);
    vector <int> a;
    b[0] = 0, b[1] = 0;
    for(int i=2; i*i<=1000003; i++)
    {
        if(b[i]==1)
        {
            a.push_back(i);
            for(int j=i*i; j<=1000003; j+=i)
            {
                b[j] = 0;
            }
        }
    }
    while(cin >> n)
    {
        if(n==0)
            break;
        else
        {
            int m;
            bool f = true;
            for(int i=0; i<a.size(); i++)
            {
                if(a[i]>=n)
                    break;
                m = n - a[i];
                if(b[m]==1)
                {
                    cout<<n<<" = "<<a[i]<<" + "<<m<<endl;
                    f = false;
                    break;
                }
            }
            if(f==true)
                cout<<"Goldbach's conjecture is wrong."<<endl;
        }
    }
}
