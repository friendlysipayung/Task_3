#include "customer.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
infotype x;

void dealokasi (address p)
{
    free(p);
};

void InsertAfter (list *l,address q, address p)
{
    cout<<"Input Setelah Data ke : ";
    int j,i;
    cin>>j;
    //p = (*l).first;
    q = (*l).first;
    for (i=1;i<j;i++)
    {
        q=q->next;
        break;
    }
    p -> next = q -> next;
    q -> next = p;
};

void deleteFirst (list *l, address p)
{
    if (((*l).first) -> next == NULL)
    {
        (*l).first = NULL;
    }
    else
    {
        p = (*l).first;
        (*l).first = p -> next;
        p -> next = NULL;
    }
    dealokasi(p);
    cout<<"Data Pertama Telah Dihapus";
    getch();
};

void deleteLast (list *l, address p)
{
    address q;
    p = (*l).first;
    if (p==NULL)
    {
        cout<<"KOSONG";
    }
    else
    {
    while (p -> next != NULL)
    {
        q = p;
        p = p -> next;
    }
    q -> next = NULL;
    dealokasi(p);
    cout<<"Data Terakhir Telah Dihapus";
    }
    getch();
};

void deleteAfter (list *l,address q, address p)
{
    cout<<"Hapus Setelah Data ke : ";
    int j,i;
    cin>>j;
    //p = (*l).first;
    address r;
    q = (*l).first;
    for (i=1;i<j;i++)
    {
        q=q->next;
        break;
    }
    r = q->next;
    q->next = r->next;
    r->next = NULL;
    dealokasi(r);
};

void insertionsort(list l)
{
    address p=(l).first;
    address q= p;
    p = p->next;
    while(p!= NULL){
        q=(l).first;
        while(q->next != p){
            if ((q -> info).ID_customer > (p -> info).ID_customer){
                int temp = (p -> info).ID_customer;
                (p -> info).ID_customer = (q -> info).ID_customer;
                (q -> info).ID_customer = temp;
            }else{
                q = q->next;
            }
        }
        p = p->next;
    }
}
