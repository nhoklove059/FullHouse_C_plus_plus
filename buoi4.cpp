#include <bits/stdc++.h>
#define maxn 1000
using namespace std;
void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void chanle(int a[], int n)
{
    int demchan = 0;
    int demle = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            demchan++;
        else
            demle++;
    }
    cout << demchan << " " << demle;
}
int main()
{
    int a[maxn];
    unsigned int n;
    cin >> n;
    nhapmang(a, n);
    chanle(a, n);
    return 0;
}