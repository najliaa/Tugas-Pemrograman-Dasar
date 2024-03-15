#include<iostream>
using namespace std;

int main(){

    int angka, jumlahDigit = 0;

    cout << "\t Menghitung Jumlah Digit Angka Integer \n\n";
    cout << "\t oleh najlia cute \n\n";

    cout << " Masukkan Angka Integer : ";
    cin >> angka;

    while (angka != 0)
    {
        jumlahDigit = jumlahDigit + angka % 10;

        angka = angka / 10;
    }

    cout << "\n Jumlah Digit Angkanya : " << jumlahDigit;
    
}