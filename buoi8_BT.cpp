// #include <bits/stdc++.h>
// using namespace std;
// struct persion
// {
//     string hoTen, diaChi, soDienThoai;
//     int tuoi;
// };
// int main()
// {
//     persion a;
//     cout << "Enter ho ten: ";
//     getline(cin, a.hoTen);
//     cout << "Enter tuoi: ";
//     cin >> a.tuoi;
//     fflush(stdin);
//     cout << "Enter dia chi: ";
//     getline(cin, a.diaChi);
//     cout << "Enter so sien thoai: ";
//     getline(cin, a.soDienThoai);
//     /* ----------------------------*/
//     cout << "---------- Thong tin --------------\n";
//     cout << "Ho ten: " << a.hoTen << '\n'
//          << "Tuoi: " << a.tuoi << '\n'
//          << "Dia chi: " << a.diaChi << '\n'
//          << "So dien thoai: " << a.soDienThoai;
//     return 0;
// }

/**
    Problem: Quản lý sinh viên
    Sinh viên: mã, tên, tuổi, lop, diem, dia chi, sdt
    ---------------------------------------------
    1/ Nhập danh sách sinh viên gồm n sinh viên với n nguyên và 0 < n < 100
    2/ Hiện danh sách sinh viên vừa nhập
    3/ Sắp xếp danh sách sinh viên vừa nhập theo chiều tăng của tuổi
    4/ Lấy tất cả sinh viên có điểm > x | với x nhập từ bàn phím
    5/ Tìm kiếm sinh viên theo lop | nhap lop in các sinh vien thuộc
    lớp đó
    6/ Thêm Sinh viên | Xóa sinh viên có mã ID nhập từ bàn phím
*/

#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien
{
    string id, ten, lop, diaChi, sdt;
    int tuoi;
    double diem;
} SV;

void nhap1SV(SV &x)
{
    cout << "\n Nhap id: ";cin >> x.id;
    fflush(stdin);
    cout << "Nhap ten: ";getline(cin, x.ten);
    fflush(stdin);
    cout << "Nhap lop: ";getline(cin, x.lop);
    fflush(stdin);
    cout << "Nhap dia chi: ";getline(cin, x.diaChi);
    fflush(stdin);
    cout << "Nhap so dien thoai: ";getline(cin, x.sdt);
    fflush(stdin);
    cout << "Nhap tuoi: ";cin >> x.tuoi;
    cout << "Nhap diem: ";cin >> x.diem;
}

void hien1SV(SV x)
{
    cout << "Ma: " << x.id << '\n'
         << "Ten: " << x.ten << '\n'
         << "Lop: " << x.lop << '\n'
         << "Dia chi: " << x.diaChi << '\n'
         << "So dien thoai: " << x.sdt << '\n'
         << "Tuoi: " << x.tuoi << '\n'
         << "Diem: " << x.diem << '\n';
}

vector<SV> ds;

void nhapDS()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        SV x;
        nhap1SV(x);
        ds.push_back(x);
    }
    cout << "Ban da nhap xong!";
}

void hienDS()
{
    if (ds.size() == 0)
    {
        cout << "danh sach rong\n";
        return;
    }
    cout << "\n ----------- Danh Sach Sinh Vien ------------\n";
    for (int i = 0; i < ds.size(); ++i)
    {
        hien1SV(ds[i]);
        cout << '\n';
    }
}

bool cmp(SV a, SV b)
{
    return a.tuoi < b.tuoi;
}

void sapXep()
{
    if (ds.size() == 0)
    {
        cout << "danh sach rong\n";
        return;
    }
    sort(ds.begin(), ds.end(), cmp);
    cout << "Ban da sap xep thanh cong!";
}

void SV_diemX()
{
    if (ds.size() == 0)
    {
        cout << "danh sach rong\n";
        return;
    }
    cout << "Nhap so diem x: ";
    double diem;
    cin >> diem;
    cout << "------------Danh Sach SV co diem > " << diem << " -----------\n";
    for (SV i : ds)
    {
        if (i.diem > diem)
        {
            hien1SV(i);
        }
    }
}

void search_lop()
{
    if (ds.size() == 0)
    {
        cout << "danh sach rong\n";
        return;
    }
    cout << "Nhap lop x: ";
    string lop;
    cin >> lop;
    cout << "------------Danh Sach SV thuoc lop " << lop << " -----------\n";
    for (auto i : ds)
    {
        if (i.lop == lop)
        {
            hien1SV(i);
        }
    }
}

void insert_SV()
{
    SV a;
    nhap1SV(a);
    ds.push_back(a);
}

void xoa_SV()
{
    if (ds.size() == 0)
    {
        cout << "danh sach rong\n";
        return;
    }
    cout << "Nhap ID sinh vien muon xoa: ";
    string id;
    cin >> id;
    for (int i = 0; i < ds.size(); ++i)
    {
        if (ds[i].id == id)
        {
            ds.erase(ds.begin() + i);
            return;
        }
    }
}
int main()
{
    int option;
    do
    {
        system("cls");
        //        system("color 7");
        cout << "------------------Menu-------------\n"
             << "1/ Nhap danh sach SV\n"
             << "2/ Hien danh sach SV\n"
             << "3/ Sap xep lai danh sach theo tuoi\n"
             << "4/ Hien thi sinh vien co diem x\n"
             << "5/ Tim kiem sinh vien co lop x\n"
             << "6/ Them sinh vien \n"
             << "7/ Xoa sinh vien\n";
        cout << "Moi ban chon: ";
        cin >> option;
        switch (option)
        {
        case 1:
            nhapDS();
            break;
        case 2:
            hienDS();
            break;
        case 3:
            sapXep();
            break;
        case 4:
            SV_diemX();
            break;
        case 5:
            search_lop();
            break;
        case 6:
            insert_SV();
            break;
        case 7:
            xoa_SV();
            break;
        }
        system("pause");
    } while (true);
    return 0;
}
