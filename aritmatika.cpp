#include <iostream>

using namespace std;

int main() {

    // code by arz_co
    
    int a;
    int b;
    int hasil;

    cout << "Masukan Nilai a = ";
    cin >> a;
    cout << "Masukan Nilai b = ";
    cin >> b;
    cin.get();

    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    //pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    //pembagian
    hasil = a / b;
    cout << a << " : " << b << " = " << hasil << endl;

    //modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    cin.get();

    return 0;
}