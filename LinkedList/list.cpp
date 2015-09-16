#include "customer.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
infotype x;

void InsertAfter (list *l,address q, address p)
{
    cout<<"Input Setelah Data ke : ";
    int j,i;
    cin>>j;
    q = (*l).first;
    for (i=1;i<j;i++)
    {
        q=q->next;
        break;
    }
    p -> next = q -> next;
    q -> next = p;
};


void deleteAfter (list *l,address q, address p)
{
    cout<<"Hapus Setelah Data ke : ";
    int j,i;
    cin>>j;
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
