#include <iostream>
using namespace std;

// Deklarasi kelas
class Tumbuhan {
public:
    string jenis;
    string nama;
    int harga;

    // Metode untuk menampilkan informasi
    void tampilkan_info() {
        cout << "Jenis: " << jenis << endl;
        cout << "Nama: " << nama << endl;
        cout << "Harga: " << harga << endl;
    }
};

int main() {
    // Membuat objek dari kelas Tumbuhan
    Tumbuhan dimakan ;

    // Memberi nilai atribut objek
    dimakan.jenis = "Buah";
    dimakan.nama = "Mangga";
    dimakan.harga = 10000;

    // Memanggil metode untuk menampilkan informasi
    dimakan.tampilkan_info();

    return 0;
}