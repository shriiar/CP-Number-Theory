#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, c = 0;
    cin >> n;
    if(n==1)
        cout<<"NO"<<endl;
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                c++;
                break;
            }
        }
        if(c>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}