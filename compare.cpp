#include <iostream>

using namespace std;

// code by arz_co

int main() {
    
    int a = 4;
    int b = 2;
    bool hasil1, hasil2;

    //sebanding
    hasil1 = (a == b);
    cout << hasil1 << endl;

    //tidak sebanding
    hasil2 = (a != b);
    cout << hasil2 << endl;

    // lebih dari
    hasil1 = (a >= b);
    cout<< hasil1 << endl;
    
    //kurang dari
    hasil2 = (a <= b);
    cout << hasil2 << endl;

    cin.get();

    return 0;
}