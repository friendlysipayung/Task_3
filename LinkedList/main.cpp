#include "customer.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int main()
{
    list l;
    int pil;
    infotype x;
    address p,q,s;
    createList (&l);

    do
    {
    system("cls");
    cout <<"Selamat datang di aplikasi ini"       <<endl;
    cout <<"Silakan pilih menu untuk melanjutkan:"<<endl;
    cout <<"1. Insert First"                      <<endl;
    cout <<"2. Insert Last"                       <<endl;
    cout <<"3. Insert After"                      <<endl;
    cout <<"4. Delete First"                      <<endl;
    cout <<"5. Delete Last"                       <<endl;
    cout <<"6. Delete After"                      <<endl;
    cout <<"7. Searching by ID"                   <<endl;
    cout <<"8. Sorting"                           <<endl;
    cout <<"9. Print All Data"                    <<endl;
    cout <<"0. Selesai"                           <<endl;
    cout<<"Masukan pilihan : ";
    cin>>pil;
    switch(pil)
    {
    case 3:
    system("cls");
    cout<<"INPUT DATA CUSTOMER"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"input ID_customer : ";
    cin>>x.ID_customer;
    cout<<"input nama        : ";
    cin>>x.nama;
    cout<<"input no hp       : ";
    cin>>x.no_hp;
    cout<<"input alamat      : ";
    cin>>x.alamat;
    cout<<"input email      : ";
    cin>>x.email;
    p = alokasi(x);
    p->next=NULL;
    InsertAfter (&l,q,p);
    break;
    case 4:
    deleteFirst (&l,p);
    break;
    case 5:
    deleteLast (&l,p);
    break;
    case 6:
    deleteAfter (&l,q,p);
    break;
    case 8:
    insertionsort(l);
    cout<<"Data telah diurutkan !!"<<endl;
    getch();
    break;
    }
    }
    while (pil != 0);

}
