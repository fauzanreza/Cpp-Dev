#include <iostream>

using namespace std;

int main(){
    int a = 6;
    int b = 4;
    bool hasil;

    //code by arz_co

    //operator logika in C++
    cout << "Operator Logika" << endl;
    cout << "  " << endl;
    
    // not
    cout << "Not" << endl;

    // not use
    hasil = (a == b);
    cout << hasil << endl;


    cout << "  " << endl;


    // and atau && (sama aja, bisa pake 22 nya)
    cout << "And" << endl;

    // and use
    hasil = (a == 6) and (b == 4);
    cout << hasil << endl;

    hasil = (a == 6) and (b == 3);
    cout << hasil << endl;

    hasil = (a == 5) && (b == 4);
    cout << hasil << endl;

    hasil = (a == 3) && (b == 3);
    cout << hasil << endl;


    cout << "  " << endl;


    // or atau || (sama juga, bisa pake 22 nya)
    cout << "Or" << endl;

    //or use
    hasil = (a == 6) or (b == 4);
    cout << hasil << endl;

    hasil = (a == 6) or (b == 3);
    cout << hasil << endl;

    hasil = (a == 5) || (b == 4);
    cout << hasil << endl;

    hasil = (a == 3) || (b == 3);
    cout << hasil << endl;



    cin.get();

    return 0;
}
