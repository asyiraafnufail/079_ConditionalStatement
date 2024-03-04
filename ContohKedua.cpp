#include <iostream>
using namespace std;

int main (){
    int Bilangan;
    string Status;
    srand(time(0));

    Bilangan = rand() % 10;
    cout << "Bilangannya adalah = " << Bilangan << endl;

    if(Bilangan % 2 == 0){
        Status = "genap";
    }
    else{
        Status = "ganjil";
    }
    cout << "Statusnya adalah = " << Status << endl;

    return 0;
}