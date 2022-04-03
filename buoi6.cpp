#include <bits/stdc++.h>
using namespace std;
int a[100][100];
void nhapmang(int &n, int &m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}
bool snt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n) /*(i*i<=n)*/; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n, m;
    cin >> n >> m;
    nhapmang(n, m);
    int max = 0, index;
    for (int j = 0; j < m; j++)
    {
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            if (snt(a[i][j]))
                dem++;
        }
        if (dem > max)
        {
            max = dem;
            index = j;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if(snt(a[i][index]))
            cout<<a[i][index]<<endl;
    }
}