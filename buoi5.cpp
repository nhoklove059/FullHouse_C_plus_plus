// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         string s;
//         cin >> s;
//         cout << (s[s.size() - 1] & 1 ? "NO" : "YES") << '\n';
//         //s là tên chuỗi, s[] là lấy phần tử của mảng ký tự
//         return 0;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (auto &x : a)
//     {
//         cin >> x;
//     }
//     sort(a.begin(), a.end());
//     n--;
//     cout << a[n / 2];
//     return 0;
// }




// mang danh dau // in ra cac so xuat hien hon 2 lan trong mang

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n], b[10000]={0};   hoac la memset(b,0,sizeof(b));  	   
// 	for(int i=0;i<n;++i) {
// 		cin>>a[i];
// 		++b[a[i]];
// 	}
// 	for(int i=0;i<n;++i){
// 		if(b[a[i]]>1) {
// 			cout<<a[i]<<" ";
// 			b[a[i]]=0;
// 		}
// 	}
// }

//a: 1 2 2 3 5 7 2
//b: 1 3 1 0 1 0 1