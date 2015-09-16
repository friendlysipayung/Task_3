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
    case 4:
    deleteFirst (&l,p);
    break;
    case 5:
    deleteLast (&l,p);
    break;
    }
    }
    while (pil != 0);

}
