#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};
void nhap(point P[], int &n)
{
    cout << "Nhap so diem : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> P[i].x >> P[i].y;
}
void xuat(point P[], int n)
{
    for (int i = 1; i <= n; i++)
        cout << "(" << P[i].x << "," << P[i].y << ")";
    cout << endl;
}
void xuly(point P[], int n)
{

    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (P[i].x > 0 && P[i].y > 0)
            dem++;
    }
    cout << "co " << dem << " diem nam o goc phan tu thu nhat" << endl;
}
int main()
{

    point P[max];
    int n;
    nhap(P, n); // cau 22
    xuat(P, n);
    xuly(P, n); // cau 23
    return 0;
}
* /
// cau 24,25
#include <bits/stdc++.h>
    using namespace std;
struct phanso
{
    int tu;
    int mau;
};
void nhapps(phanso &ps)
{
    cout << "Nhap tu so : ";
    cin >> ps.tu;
    cout << "Nhap mau so : ";
    cin >> ps.mau;
}
int rutgonps(int a, int b)
{

    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
void xuatps(phanso ps)
{
    int uc = rutgonps(ps.tu, ps.mau);
    ps.tu = ps.tu / uc;
    ps.mau = ps.mau / uc;
    if (ps.mau == 1)
        cout << ps.tu;
    else
        cout << ps.tu << "/" << ps.mau;
    cout << endl;
}
void tongps(phanso ps1, phanso ps2)
{
    phanso ps;
    ps.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    ps.mau = ps1.mau * ps2.mau;
    xuatps(ps);
}

void hieups(phanso ps1, phanso ps2)
{
    phanso ps;
    ps.tu = ps1.tu * ps2.mau - ps1.mau * ps2.tu;
    ps.mau = ps1.mau * ps2.mau;
    xuatps(ps);
}

void tichps(phanso ps1, phanso ps2)
{
    phanso ps;
    ps.tu = ps1.tu * ps2.tu;
    ps.mau = ps1.mau * ps2.mau;
    xuatps(ps);
}

void thuongps(phanso ps1, phanso ps2)
{
    phanso ps;
    ps.tu = ps1.tu * ps2.mau;
    ps.mau = ps1.mau * ps2.tu;
    xuatps(ps);
}
int main()
{
    phanso ps, ps1, ps2;
    // cau 24
    nhapps(ps);
    xuatps(ps);
    // cau 25
    nhapps(ps1);
    nhapps(ps2);
    tongps(ps1, ps2);
    hieups(ps1, ps2);
    tichps(ps1, ps2);
    thuongps(ps1, ps2);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

typedef struct toado
{
    int x;
    int y;
} TD;

int n;
vector<TD> a;
TD res;

bool cmp(TD p, TD q)
{
    return p.y > q.y;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TD tmp;
        cin >> tmp.x >> tmp.y;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end(), cmp);
    int mx = 1, l = 0, r = 0;
    for (int l = 0, r = 0; r < n; ++r)
    {
        if (a[r].x != a[l].x || a[r].y != a[l].y)
        {
            if (mx < (r - l + 1))
            {
                mx = r - l + 1;
                res.x = a[l].x;
                res.y = a[l].y;
                l = r;
            }
        }
    }
    if (mx < (r - l + 1))
    {
        mx = r - l + 1;
        res.x = a[l].x;
        res.y = a[l].y;
    }
    cout<<res.x<<" "<<res.y;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef struct sinhvien
{
    int age;
    string name;
    string phone;
} SV;

void nhap(SV &a)
{
    cin >> a.age >> a.name >> a.phone;
}

int n;
vector<SV> a;

bool cmp(SV x, SV y)
{
    if (x.age == y.age)
        return x.phone < y.phone;
    else
        return x.age > y.age;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        SV x;
        nhap(x);
        a.push_back(x);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 1; i < n; ++i)
    {
        if (a[i].age == a[i - 1].age)
        {
            cout << a[i].age << " " << a[i].name << " " << a[i].phone << endl;
        }
        else
            break;
    }
    return 0;
}