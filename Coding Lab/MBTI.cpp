#include <iostream>
#include <string>
using namespace std;

class Robot {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;
    std::string mbti;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Robot (std::string n, int u, std::string m) {
        nama = n;
        umur = u;
        mbti = m;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    // Setter untuk mendapatkan MBTI
    void setMbti (std::string m) {
        mbti = m;
    }

    // Getter untuk mengatur MBTI
    std::string getMbti () {
        return mbti;
    }

    // Metode untuk menampilkan perkenalan diri
    void memperkenalkan_diri() {
        cout << "Nama: " << nama << ", Umur: " << umur << ", Mbti: " << mbti << endl;
    }
};

int main() {

    // Membuat objek robot r1
    Robot r1("Najlia", 20 , "INFJ");
    r1.memperkenalkan_diri();

    // Membuat objek robot r2
    Robot r2("Intani", 20, "INTP");
    r2.memperkenalkan_diri();

    return 0;
}