#include <iostream>

using namespace std;

int main (){
    string nama, start, q1, q2, q3;

    cout << "aplikasi cek kepribadian" <<endl;
    cout << "========================" << endl;
    cout << "Siapa nama kamu ? :" <<endl;
    cin >> nama;

    cout <<"Mau mulai test kepribadiannya ? (yes/no) : ";
    cin >> start;

    if(start == "yes"){

        cout << "Apakah kamu suka memberi ? (yes/no) : ";
        cin >> q1;
    

        cout << "Apakah kamu suka dengan anak kecil ? (yes/no) : ";
        cin >> q2;
    

        cout << "Apakah kamu suka beribadah ? (yes/no) : ";
        cin >> q3;
        cin.get();

        if(q1 == "yes" && q2 == "yes" && q3 == "yes"){
            cout << "Kamu orang baik :)"<<endl;
        } else if(q1 == "no" && q2 == "no" && q3 == "no"){
            cout << nama << " hidoi T_T "<<endl;
        } else {
            cout << "kamu cuma warga sipil, berusaha untuk terus berbuat kebaikan yaa :)"<<endl;
        }
        cin.get();
    } else {
        cout << "Terima Kasih sudah membuka aplikasi ini"<<endl;
    }
    cin.get();
    cin.get();
	return 0;
}