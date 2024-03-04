#include <iostream>
using namespace std;

int main (){
    int nBilA, nBilB;
    string Status;
    srand(time(0));

    nBilA = rand() % 10;
    nBilB = rand() % 10;

    cout << "Tampilkan bilangan" << nBilA << endl;
    cout << "Tampilkan bilangan" << nBilB << endl;

    if(nBilA == nBilB){
        Status = "Nilai A dan Nilai B sama besar";
    }
    else if(nBilA > nBilB){
        Status = "Bilangan A lebih besar daripada Bilangan B";
    }
    else{
        Status = "Bilangan A lebih kecil daripada Bilangan B";
    }

    cout << "Tampilkan Status" << Status << endl;

    return 0;
}