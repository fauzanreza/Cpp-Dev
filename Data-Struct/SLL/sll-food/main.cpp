#include "header-list.h"

int main()
{
    infotype x;
    string n;
    list L;
    address P, prec;
    createlist(L);

    cout<<"SLL - Food"<<endl;
    cout<<endl;

    cout<<"masukan nama makanan : "<<endl;
    cout <<"insert first : " <<endl;
    cin >> x;
    P = allocate(x);
    insertFirst(L,P);
    print(L);
    cout <<endl;

    cin >> x;
    P = allocate(x);
    insertFirst(L,P);
    print(L);
    cout <<endl;

    cout <<"insert last : " <<endl;
    cin >> x;
    P = allocate(x);
    insertLast(L,P);
    print(L);
    cout <<endl;

    cin >> x;
    P = allocate(x);
    insertLast(L,P);
    print(L);
    cout <<endl;

    cout <<"insert after : " <<endl;
    cout << "Ingin disisipkan setelah objek apa ? "<<endl;
    cin >> n;
    cout<<endl;
    prec = searchlist(L, n);
    cin >> x;
    P = allocate(x);
    insertAfter(L, prec, P);
    print(L);
    cout <<endl;




    cout<<"del first"<<endl;
    delFirst(L, P);
    print(L);
    cout <<endl;

    cout << "del last"<<endl;
    delLast(L, P);
    print(L);
    cout <<endl;


    cout << "del after"<<endl;
    cout << "posisi objek yang ingin dihapus setelah objek apa ? "<<endl;
    cin >> n;
    prec = searchlist(L, n);
    delAfter(L, prec, P);
    print(L);
    cout <<endl;

    return 0;
}
