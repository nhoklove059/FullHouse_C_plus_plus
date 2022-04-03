#include <bits/stdc++.h>
using namespace std;
ifstream fi("GIFTS.int");
ofstream fo("GIFTS.out");
int n, x;
set<int> a;
bool OK(int x)
{
    for (auto i : a)
    {
        int v = x - i;
        if (v < 0)
            continue;
        if (a.find(v) != a.end() && v != i)
            return true;
    }
    return false;
}
int main()
{
    fi >> n >> x;
    for (int i = 0; i < n; ++i)
    {
        int x;
        fi >> x;
        a.insert(x);
    }
    int l = 0, r = x, res = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (OK(m))
        {
            res = m;
            l = m + 1;
        }

        else
        {
            r = m - 1;
        }
    }
    fo << res << '\n';
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     int64_t x;
//     cin >> n >> x;
//     vector<int64_t> a(n);
//     for (auto &i : a)
//         cin >> i;
//     sort(a.begin(), a.end());
//     int l = 0, r = n - 1;
//     while (l <= r)
//     {
//         int m = (l + r) >> 1;
//         if (a[m] <= x)
//         {
//             l = m + 1;
//         }
//         else
//             r = m - 1;
//     }
//     (l - 1 >= 0 ? cout << a[l - 1] : cout << "NO");
//     return 0;
// }