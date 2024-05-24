#include <iostream>
#include <string>

class Tumbuhan {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string jenis;
    int harga;
    std::string nama;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Tumbuhan
    Tumbuhan (std::string j, int h, std::string n) {
        jenis = j;
        harga = h;
        nama = n;
    }

    // Setter untuk mengatur jenis
    void setJenis(std::string j) {
        jenis = j;
    }

    // Getter untuk mendapatkan jenis
    std::string getJenis() {
        return jenis;
    }

    // Setter untuk mengatur harga
    void setHarga(int h) {
        harga = h;
    }

    // Getter untuk mendapatkan harga
    int getHarga() {
        return harga;
    }

    //Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    //Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    } 

    // Metode untuk menampilkan Informasi Tumbuhan
    void pembelian() {
        std::cout << "Jenis: " << jenis << ", Harga: " << harga << ", Nama: " << nama << std::endl;
    }
};

int main() {
    Tumbuhan a1("Buah", 10000 ,"Mangga" );
   
    std::cout << "Pembelian:" << std::endl;
    a1.pembelian() ;

std::cout << "Total:" << a1.getHarga();

    return 0;
}