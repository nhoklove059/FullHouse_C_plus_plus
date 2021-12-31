#include <bits/stdc++.h>
using namespace std;
bool SNT(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        if (SNT(i))
            if (i>10)
                cout<<i<<" ";
    return 0;
}
