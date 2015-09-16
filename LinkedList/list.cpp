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
