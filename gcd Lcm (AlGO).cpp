#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x;
    cin >> a >> b;
    if(a<b)
        swap(a, b);
    int i = a, j = b;
    while(j!=0)
    {
        x = j;
        j = i % j;
        i = x;
    }
    j = (a/i)*b;
    cout<<i<<" "<<j<<endl;
}
