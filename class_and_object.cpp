#include <bits/stdc++.h>
using namespace std;
// class MyClass
// {
// public:
//     int myNum;
//     string myString;
// };
// int main()
// {
//     MyClass myObj;
//     myObj.myNum = 15;
//     myObj.myString = "Some text";
//     cout << myObj.myNum << endl;
//     cout << myObj.myString;
//     return 0;
// }

// class Car
// {
// public:
//     string brand;
//     string model;
//     int year;
// };
// int main()
// {
//     Car carObj1;
//     carObj1.brand = "BMW";
//     carObj1.model = "X5";
//     carObj1.year = 1999;
//     Car carObj2;
//     carObj2.brand = "Ford";
//     carObj2.model = "Mustang";
//     carObj2.year = 1969;
//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n ";
//     fflush(stdin);
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n ";
// }

// class MyClass
// {
// public:
//     void myMethod()
//     {
//         cout << "Hello World!";
//     }
// };
// int main()
// {
//     MyClass myObj;
//     myObj.myMethod();
//     return 0;
// }

// class MyClass
// {
// public:
//     void myMethod();
// };
// void MyClass::myMethod()
// {
//     cout << "Hello World!";
// }
// int main()
// {
//     MyClass myObj;
//     myObj.myMethod();
//     return 0;
// }

int n, a, ans = 0, b = 1025;
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        ans += a - (1 - (a & 1));
        b = min(b, a);
    }
    cout << (ans - b * (1 - (b & 1)));
    return 0;
}