// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char kitu;
//     cin>>kitu;
//     int a =int (kitu);
//     if(97<=a && a<122)
//     {
//         a+=1;
//         cout<<char(a);
//     }
//     else if(65<=a && a<90)
//     {
//         a+=33;
//         cout<<char(a);
//     }
//     else if(a==122 || a==90)
//     {
//         cout<<"a";
//     }
//     else
//         cout<<"INVALID";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    long long delta = b*b-4*a*c;
    float x1 = (-b+sqrt(delta))/(2*a);
    float x2 = (-b-sqrt(delta))/(2*a);
    float x = -b/2*a;
    if (delta <0)
        cout<<"NO";
    if (delta == 0)
        cout<<fixed<<setprecision(2)<<x;
    if (delta > 0)
    cout<<fixed<<setprecision(2)<<x1<<" "
        <<fixed<<setprecision(2)<<x2;
    return 0;
}