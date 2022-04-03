#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createNode(int x) //tạo mới 1 node
{
    node *temp = new node;
    temp->next = NULL;
    temp->data = x;
    return temp;
}
node *addElement(node *p, int x) //thêm node vào DSLK
{
    node *temp = createNode(x); 
    p->next = temp;
    return temp;
}
void printList(node *l) //in DSLK
{
    node *p = l;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
// //duyet danh sach
// node *p = 1;
// while (p != NULL){
// // Xử lý P
// p = p->next;
// }
node *deleteHead(node *l) //xoá node đầu
{
    node *p = l;
    p = p->next;
    delete (l);
    return p;
}
node *deleteTail(node *l) //xoá node cuối
{
    node *p = l;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    delete (p->next);
    p->next = NULL;
    return l;
}
node *deleteAt(node *l, int k) // xoá node ở vị trí
{
    node *p = l;
    for (int i = 0; i < k - 1; i++)
    {
        p = p->next;
    }
    node *temp = p->next;
    p->next = p->next->next;
    delete (temp);
    return l;
}

int main()
{
    // nhap xuat phan tu
    int n, x;
    cin >> n >> x;
    node *l = createNode(x);
    node *p = l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    printList(l);
    return 0;
}

// // xoa phan tu tai vi tri k
int main()
{
    int n, x, k;
    cin >> n >> x;
    node *l = createNode(x);
    node *p = l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    cin >> k;
    if (k == 0)
    {
        l = deleteHead(l);
    }
    else if (k == n - 1)
    {
        l = deleteTail(l);
    }
    else
    {
        l = deleteAt(l, k);
    }
    printList(l);
    return 0;
}