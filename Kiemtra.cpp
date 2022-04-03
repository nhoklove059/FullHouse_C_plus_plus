// Sinh viên (mã – string, tên – string, năm sinh – int , gt - string
//  địa chỉ - string, số điện thoại – string, điểm TB - float)
// Viết chương trình xử lý:
// 1.	Nhập danh sách n sinh viên
// 2.	Hiện danh sách n sinh viên
// 3.	Sắp xếp danh sách n sinh viên theo tăng dân của điểm,
//      nếu điểm bằng nhau phải giảm dần của năm sinh.
// 4.	Tìm kiếm sinh viên là nữ tên X với X nhập từ bàn phím
// 5.	Tìm kiếm sinh viên là nam tên Y với Y nhập từ bàn phím
// 6.	Xóa sinh viên có mã Z với Z nhập bàn phím
// 7.	Đưa danh sách các sinh viên có điểm TB lớn nhất
// 8.	Đưa danh sách các sinh viên có điểm TB nhỏ nhất
// Phải đảm bảo n sinh viên có mã ID là duy nhất

// #include <bits/stdc++.h>
// using namespace std;

// typedef struct SinhVien
// {
//     string ma, ten, dc, sdt, gt;
//     int tuoi;
//     float diem;
// } sv;

// int n;
// vector<sv> ds;
// set<string> ID;

// void nhap1sv(sv &x)
// {
//     cout << "Ma: ";cin >> x.ma;
//     cout << "Ten: ";getline(cin, x.ten);
//     fflush(stdin);
//     cout << "Dia chi: ";getline(cin, x.dc);
//     fflush(stdin);
//     cout << "SDT: ";getline(cin, x.sdt);
//     fflush(stdin);
//     cout << "Gioi Tinh: ";getline(cin, x.gt);
//     fflush(stdin);
//     cout << "Tuoi: ";cin >> x.tuoi;
//     cout << "Diem: ";cin >> x.diem;
// }

// void hien1sv(sv x)
// {
//     cout << "Ma: " << x.ma << '\n'
//          << "Ten: " << x.ten << '\n'
//          << "Dia chi: " << x.dc << '\n'
//          << "SDT: " << x.sdt << '\n'
//          << "Gioi tinh: " << x.gt << '\n'
//          << "Tuoi: " << x.tuoi << '\n'
//          << "Diem: " << x.diem << '\n';
// }

// void nhapDS()
// {
//     cout << "Nhap so luong phan tu: ";
//     cin >> n;
//     for (int i = 0; i < n; ++i)
//     {
//         sv x;
//         nhap1sv(x);
//         if (ID.find(x.ten) == ID.end())
//         {
//             ID.insert(x.ten);
//             ds.push_back(x);
//         }
//         else
//         {
//             cout << "Ma da ton tai nhap lai\n";
//             i--;
//         }
//     }
// }

// void hienDS()
// {
//     if (n == 0)
//     {
//         cout << "danh sach rong!.";
//         return;
//     }
//     cout << "Danh sach sinh vien la\n";
//     for (auto i : ds)
//     {
//         hien1sv(i);
//     }
// }

// bool cmp(sv a, sv b)
// {
//     if (a.diem == b.diem)
//     {
//         return a.tuoi > b.tuoi;
//     }
//     return a.diem < b.diem;
// }

// void sortDS()
// {
//     sort(ds.begin(), ds.end(), cmp);
//     cout << "Sap xep thanh cong!\n";
// }

// void search_ten_nu()
// {
//     if (n == 0)
//     {
//         cout << "danh sach rong!.";
//         return;
//     }
//     string x;
//     cout << "Nhap ten muon tim: ";
//     getline(cin, x);
//     for (auto i : ds)
//     {
//         if ((i.gt == "nu" || i.gt == "Nu") && (i.ten == x))
//         {
//             cout << "Thong tin sv can tim: \n";
//             hien1sv(i);
//             return;
//         }
//     }
//     cout << "Khong ton tai !\n";
// }

// void search_ten_nam()
// {
//     if (n == 0)
//     {
//         cout << "danh sach rong!.";
//         return;
//     }
//     string x;
//     cout << "Nhap ten muon tim: ";
//     getline(cin, x);
//     for (auto i : ds)
//     {
//         if ((i.gt == "nam" || i.gt == "Nam") && (i.ten == x))
//         {
//             cout << "Thong tin sv can tim: \n";
//             hien1sv(i);
//             return;
//         }
//     }
//     cout << "Khong ton tai !\n";
// }

// void xoa_sv()
// {
//     if (n == 0)
//     {
//         cout << "danh sach rong!.";
//         return;
//     }
//     string x;
//     cout << "Nhap ten muon xoa: ";
//     getline(cin, x);
//     for (int i = 0; i < n; ++i)
//     {
//         if (ds[i].ten == x)
//         {
//             ds.erase(ds.begin() + i);
//             n = ds.size();
//             return;
//         }
//     }
// }

// void DS_diem_max()
// {
//     if (n == 0)
//     {
//         cout << "danh sach rong!.";
//         return;
//     }
//     float ma_diem = ds[0].diem;
//     for (auto i : ds)
//     {
//         if (i.diem > ma_diem)
//             ma_diem = i.diem;
//     }
//     cout << "Danh sach sv co diem lon nhat la \n";
//     for (auto i : ds)
//     {
//         if (i.diem == ma_diem)
//         {
//             hien1sv(i);
//         }
//     }
// }

// void DS_diem_min()
// {
//     if (n == 0)
//     {
//         cout << "danh sach rong!.";
//         return;
//     }
//     float mi_diem = ds[0].diem;
//     for (auto i : ds)
//     {
//         if (i.diem < mi_diem)
//             mi_diem = i.diem;
//     }
//     cout << "Danh sach sv co diem nho nhat la \n";
//     for (auto i : ds)
//     {
//         if (i.diem == mi_diem)
//         {
//             hien1sv(i);
//         }
//     }
// }

// int main()
// {
//     int option;
//     do
//     {
//         system("cls");
//         cout << "1. Nhap DS\n"
//              << "2. Hien DS\n"
//              << "3. Sap xep\n"
//              << "4. Tim sv Nam\n"
//              << "5. Tim sv Nu\n"
//              << "6. Xoa sv\n"
//              << "7. sv Diem Cao\n"
//              << "8. sv Diem Thap\n"
//              << "9. Thoat\n";
//         cout << "ban chon: ";
//         cin >> option;
//         switch (option)
//         {
//         case 1:
//             nhapDS();
//             break;
//         case 2:
//             hienDS();
//             break;
//         case 3:
//             sortDS();
//             break;
//         case 4:
//             search_ten_nam();
//             break;
//         case 5:
//             search_ten_nu();
//             break;
//         case 6:
//             xoa_sv();
//             break;
//         case 7:
//             DS_diem_max();
//             break;
//         case 8:
//             DS_diem_min();
//             break;
//         case 9:
//             cout << "Thank!";
//             return 0;
//         }
//         system("pause");
//     } while (true);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef struct SinhVien
{
        string ID,name, adress, sdt, gioitinh;
        int namsinh;
        float DTB;
} SinhVien;
void Menu()
{
        cout << "==================Menu==================\n"
             << "1. Nhap Danh Sach N sinh vien\n"
             << "2. Hien Danh Sach N Sinh Vien\n"
             << "3.Sap xep theo DTB hoac Nam Sinh\n"
             << "4.Tim kiem sinh vien nu ten X\n"
             << "5.Tim kiem sinh vien nam ten X\n"
             << "6. Xoa Sinh Vien co ma Z\n"
             << "7. Dua Danh Sach Sinh Vien co diem TB lon nhat\n"
             << "8. Dua Danh Sach Sinh Vien co diem TB nho nhat\n"
             << "9. exit\n";
}
void NhapMangSv(SinhVien *sv, int n)
{
        for (int i = 0; i < n; i++)
        {
                cout<<"Nhap ID sinh vien:";
                getline(cin, sv[i].ID);
                fflush(stdin);
                cout<<"Nhap ten sinh vien:";
                getline(cin, sv[i].name);
                fflush(stdin);
                cout<<"Nhap nam sinh sinh vien:";
                cin >> sv[i].namsinh;
                fflush(stdin);
                cout<<"Nhap dia chi sinh vien:";
                getline(cin, sv[i].adress);
                fflush(stdin);
                cout<<"Nhap sdt sinh vien:";
                getline(cin, sv[i].sdt);
                fflush(stdin);
                cout<<"Nhap DTB sinh vien:";
                cin >> sv[i].DTB;
                fflush(stdin);
                cout<<"Nhap gioi sinh vien Nam/Nu:";
                getline(cin, sv[i].gioitinh);
                cin.ignore();
        }
}
void Xuat_1_sv(SinhVien a)
{
        cout <<a.ID<<'\t'<< a.name << '\t' << a.namsinh << '\t' << a.adress << '\t' << a.sdt << '\t' << a.DTB << '\t' << a.gioitinh << '\n';
}
void Xuat(SinhVien *sv, int n)
{
        for (int i = 0; i < n; i++)
        {
                cout <<sv[i].ID<<'\t'<< sv[i].name << '\t' << sv[i].namsinh << '\t' << sv[i].adress << '\t' << sv[i].sdt << '\t' << sv[i].DTB << '\t' << sv[i].gioitinh << '\n';
        }
}
void sapxep(SinhVien *sv, int n)
{
        for (int i = 0; i < n; i++)
        {
                for (int j = i + 1; j < n; j++)
                {
                        if (sv[i].DTB > sv[j].DTB)
                        {
                                SinhVien temp;
                                temp = sv[i];
                                sv[i] = sv[j];
                                sv[j] = temp;
                        }
                        else if (sv[i].DTB == sv[j].DTB)
                        {
                                if (sv[i].namsinh < sv[j].namsinh)
                                {
                                        SinhVien temp;
                                        temp = sv[i];
                                        sv[i] = sv[j];
                                        sv[j] = temp;
                                }
                        }
                }
        }
}
void timkiemsvNU(SinhVien* sv, string X,int n)
{
        for(int i = 0 ; i < n ; i++)
        {
                if(sv[i].name == X && sv[i].gioitinh == "Nu")
                {
                        Xuat_1_sv(sv[i]);
                        return;
                }
        }
        cout<<"Ko tim thay\n";
}
void timkiemsvNAM(SinhVien* sv, string X,int n)
{
        for(int i = 0 ; i < n ; i++)
        {
                if(sv[i].name == X && sv[i].gioitinh == "Nam")
                {
                        Xuat_1_sv(sv[i]);
                        return;
                }
        }
        cout<<"Ko tim thay\n";
}
void xoa(SinhVien* sv,int &n,string id)
{
        for(int i = 0 ; i < n ; i++)
        {
                if(sv[i].ID == id)
                {
                        if(i == n-1)
                        {
                                n--;
                                return;
                        }
                        else
                        {
                                for(int j = i; j < n - 1 ; j++)
                                {
                                        sv[j] = sv[j+1];
                                }
                                n--;
                                return;
                        }
                }
        }
}
void DSSVlon(SinhVien* sv, int n)
{
        int max = 0; 
        int b[n];
        int index = 0;
        for(int i = 0 ; i < n ;i ++)
        {
                if(sv[i].DTB == max)
                {
                        b[index] = i;
                        index++;
                }
                else if(sv[i].DTB > max)
                {
                        b[0] = i;
                        index = 1; 
                        max = sv[i].DTB;
                }
        }
        for(int i = 0; i < index; i++)
                Xuat_1_sv(sv[b[i]]);
}
void DSSVnho(SinhVien* sv, int n)
{
        int min = 11; 
        int b[n];
        int index = 0;
        for(int i = 0 ; i < n ;i ++)
        {
                if(sv[i].DTB == min)
                {
                        b[index] = i;
                        index++;
                }
                else if(sv[i].DTB < min)
                {
                        b[0] = i;
                        index = 1; 
                        min = sv[i].DTB;
                }
        }
        for(int i = 0; i < index; i++)
                Xuat_1_sv(sv[b[i]]);
}
int main()
{
        Menu();
        int n;
        cout<<"Nhap so luong sv:";
        cin >> n;
        fflush(stdin);
        SinhVien a[n];
        while (true)
        {
                int choice;
                cout<<"Nhap Vao Lua chon tu 1->9: ";
                cin >> choice;
                fflush(stdin);
                string X,Y,Z;
                switch (choice)
                {
                case 1:
                        NhapMangSv(a,n);
                        break;
                case 2:
                        Xuat(a,n);
                        break;
                case 3:
                        sapxep(a,n);
                        break;
                case 4:
                        getline(cin,X);
                        cin.ignore();
                        timkiemsvNU(a,X,n);
                        break;
                case 5:
                        getline(cin,Y);
                        cin.ignore();
                        timkiemsvNAM(a,Y,n);
                        break;
                case 6:
                        getline(cin,Z);
                        cin.ignore();
                        xoa(a,n,Z);
                        break;
                case 7:
                        DSSVlon(a,n);
                        break;
                case 8:
                        DSSVnho(a,n);
                        break;
                case 9:
                        return 0;
                        break;
                }
        }
}