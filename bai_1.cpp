/* bai 1
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int S=0, i=1,m=27;
	do
    {
        S=S+i;
        i++;
    }
    while (S<=m);
    cout<<i;
	return 0;
}
*/
/*bai 2
#include<iostream>
#define maxn 100
using namespace std;
int main()
{
	int n=3,s=0;
	int a[maxn][maxn];
	a[0][0]=4;a[0][1]=1;a[0][2]=3;
    a[1][0]=5;a[1][1]=2;a[1][2]=6;
    a[2][0]=2;a[2][1]=7;a[2][2]=8;
    for(int i=0;i<n;i++)
	s=s+a[i][i];
	cout<<s;
	return 0;
}
*/
//bài 3
/*#include<iostream>
#include<math.h>
using namespace std;
int test(int n);
int main()
{
    int n;
    cout<<test(15);
    return 0;
}
int test(int n){
    if (n==1 || n==2)
        return 1;
    else
        return test(n-1)+test(n-2);
}
*/
//bai 4
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a=20,b=11;
    switch (a%b){
    case 0: a++; break;
    case 1: b++; break;
    default:
        {
        a=a+b;
        b=b+a;
        }
    break;
    }
    cout<<a+b;
    return 0;
}
*/
//bai 5
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a=2,b=3;
    if (b>a)
        if(!(a+b)%2)
            a=a+b;
        else
            b=b+a;
    else
    {
        a=a-b;
        b=b-a;
    }
    cout<<a+b;
    return 0;
}
*/
//bai 6
/*#include<iostream>
#define maxn 100
using namespace std;
void X(int a[], int &n, int k)
{
    for(int i=k;i<n-1;i++)
    a[i]=a[i+1];
    n--;
}
int main()
{
    int n=10;
    int a[]={2,23,7,3,31,43,5,19,2020,6};
    X(a,n,8);
    cout<<n<<" "<<a[8];
    return 0;
}
*/
//bai 7
/*#include<iostream>
#define maxn 100
using namespace std;
struct point
{
    int x;
    int y;
};
int main()
{
    point p[maxn],z;
    cout<<sizeof(z)<<" "<<sizeof(p)<<endl;
    return 0;
}
*/
#include<iostream>
#include<math.h>
using namespace std;
int test(int n);
int main()
{
    int n=215;
    cout<<test(n);
    return 0;
}
int test(int n){
    int s=0;
    while (n>0){
        s=s+n%10;
        n=n/10;

    }
    return s;
}













