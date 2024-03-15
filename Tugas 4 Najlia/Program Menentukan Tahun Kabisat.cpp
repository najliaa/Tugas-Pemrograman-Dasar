#include<iostream>
using namespace std;

int main(){

    int tahun;

    cout << "\t Menentukan Tahun Kabisat \n\n";
    cout << "\t oleh najlia cute \n\n ";

    cout << " Masukkan Tahun : ";
    cin >> tahun;

    if(tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0){

        cout << "Ini adalah Tahun Kabisat";
    }

    else {

        cout << "\n Ini Bukan Tahun Kabisat";
    }
}