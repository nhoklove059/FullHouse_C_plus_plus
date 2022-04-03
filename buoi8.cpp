#include <bits/stdc++.h>
#define NAME "EXERCISES"
using namespace std;
int main()
{
    int n, tong = 0;
    cin >> n;
    fflush(stdin);
    char s[n];
    gets(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] % 2 == 0)
            tong = tong + (i+1);
    }
    cout << tong;
}
//4
//0 1 2 3
//1 2 3 4