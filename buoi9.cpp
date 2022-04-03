#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    for (int i = 1; i <= n; i++)
    {
        string x, w;
        getline(cin, x);
        map<string, int> mp;
        stringstream ss(x);
        int temp = 0;
        cout << "#Test " << i << ": ";
        while (ss >> w)
        {
            ++mp[w];
            if (mp[w] > 1)
            {
                cout << w << endl;
                temp = 1;
                break;
            }
        }
        if (temp == 1)
            continue;
        cout << -1 << endl;
    }
}