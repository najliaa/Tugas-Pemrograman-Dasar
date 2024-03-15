#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Masukkan nilai X
    double x;
    cout << "Masukkan nilai X: ";
    cin >> x;

    // Hitung turunan dari fungsi X
    double turunan = pow(x, 2);

    // Tampilkan nilai turunan
    cout << "Nilai turunan dari fungsi X = " << turunan << endl;
    
    return 0;
}