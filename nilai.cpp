#include <iostream>

using namespace std;

int main(){
    int nilai;
    string matkul;
    char indeks;

    cout << "Aplikasi cek nilai"<<endl;
    cout <<"=================="<<endl;
    cout << "Masukan Nama Mata Kuliah : ";
    cin >> matkul;
    cout << "Masukan Nilai Anda (0 -100): ";
    cin >> nilai;

    if(nilai >= 0 && nilai <= 100 ){
        if(nilai >= 80 ){
            indeks = 'A';
        } else if(nilai >= 65 && nilai < 80){
            indeks = 'B';
        } else if(nilai >= 55 && nilai < 65){
            indeks = 'C';
        } else if(nilai >= 40 && nilai < 55){
            indeks = 'D';
        } else {
            indeks = 'E';
        }

        cout << "Dalam matkul "<< matkul <<" anda mendapat nilai "<< indeks << endl;
        
    } else {
        cout << "input nilai tidak valid"<<endl;
    }

    
    
    cin.get();
    cin.get();
    
    return 0;
}