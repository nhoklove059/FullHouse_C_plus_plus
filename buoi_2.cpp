#include <bits/stdc++.h>
using namespace std;
int main()
{
    uint64_t n;
    cin>>n;
    int i,s=0;
    do
    {
        i=n%10;
        s=s+i;
        n=n/10;
    }while(n!=0);
    cout<<s;
}