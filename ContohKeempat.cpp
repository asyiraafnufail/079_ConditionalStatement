#include <iostream>
using namespace std;

int main(){
    int nilaiMatematika;
    int nilaiFisika;
    int nilaiRerata;
    string Status;

    cout << "Masukkan nilai matematika: ";
    cin >> nilaiMatematika;

    cout << "Masukkan nilai fisika: ";
    cin >> nilaiFisika;
    
    nilaiRerata = (nilaiMatematika + nilaiFisika) / 2;

    if (nilaiRerata > 60 || nilaiMatematika > 70) {
        Status = "Selamat anda lulus";
    } else {
        Status = "Maaf, Anda tidak lulus.";
    }
    cout << "Statusnya adalah " << Status << endl;

    return 0;
}

