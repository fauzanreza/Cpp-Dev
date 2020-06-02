#include <iostream>

using namespace std;

int main (){
	int a, b, umur;

	cout << " Masukan Tahun kamu lahir : " ;
	cin >> a;
	cout <<"Masukan Tahun Sekarang : ";
	cin >> b;

	umur = b - a; 

	if(umur > 0){
	cout << "Umur anda adalah " << umur << " tahun" <<endl;
	} else {
	cout << "Maaf, anda belum lahir "<<endl;
	}

	cin.get();
	return 0;
}