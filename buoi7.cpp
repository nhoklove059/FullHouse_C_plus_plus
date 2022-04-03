// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     int res = 0;
//     for (char i : s)
//     {
//         if (i >= 'A' && i <= 'Z')
//             res++;
//     }
//     cout << res;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s, tmp = " ";
//     getline(cin, s);
//     for (int i = s.size() - 1; i >= 0; --i)
//         tmp += s[i];
//     cout << (tmp==1 ? "YES" : "NO");
// }

// buoi 7 bai 2
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      string s;
//      getline(cin,s);
//      int x,y;
//      cin>>x>>y;
//      string res=s.substr(x,y-x+1);
//      cout<<res;
//  }

// buoi 7 bai 3
// #include <bits/stdc++.h>
// using namespace std;
// int a[256]{};
// int main()
// {
//     string s;
//     getline(cin, s);
//     for (int i = 0; i < s.length(); i++)
//     {
//         a[s[i]]++;
//     }
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (a[s[i]])
//         {
//             cout << s[i] << " " << a[s[i]] << endl;
//             a[s[i]]=0;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int a[256]{};
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        a[s[i]] = 1;
    }
    for (int i = 65; i <= 90; i++)
    {
        if (a[i] == 1)
        {
            cout << char(i);
        }
    }
    return 0;
}