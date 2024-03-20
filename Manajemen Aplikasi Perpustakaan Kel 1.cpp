#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Buku {
    string Judul;
    string Pengarang;
    int Tahun_terbit;
    string isbn;
};

int main() {
    vector<Buku> Daftar_buku;

    int pilihan = 0;
    do {
        cout << "Selamat Datang di Perpustakaan Pojok Baca!\n\n";
        cout << "Menu:\n";
        cout << "1. Tambah Buku Baru\n";
        cout << "2. Tampilkan Daftar Buku\n";
        cout << "3. Cari Buku\n";
        cout << "4. Hapus Buku\n";
        cout << "5. Keluar\n\n";
        cout << "Pilih operasi yang ingin dilakukan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                Buku bukuBaru;
                cout << "\nMasukkan informasi buku baru:\n";
                cout << "Judul: ";
                cin.ignore();
                getline(cin, bukuBaru.Judul);
                cout << "Pengarang: ";
                getline(cin, bukuBaru.Pengarang);
                cout << "Tahun Terbit: ";
                cin >> bukuBaru.Tahun_terbit;
                cout << "Nomor ISBN: ";
                cin.ignore();
                getline(cin, bukuBaru.isbn);

                Daftar_buku.push_back(bukuBaru);
                cout << "\nBuku berhasil ditambahkan ke dalam perpustakaan.\n\n";
                break;
            }
            case 2: {
                if (Daftar_buku.empty()) {
                    cout << "\nDaftar Buku dalam Perpustakaan kosong.\n\n";
                } else {
                    cout << "\nDaftar Buku dalam Perpustakaan:\n";
                    for (int i = 0; i < Daftar_buku.size(); ++i) {
                        cout << i + 1 << ". Judul: " << Daftar_buku[i].Judul << "\n";
                        cout << "   Pengarang: " << Daftar_buku[i].Pengarang << "\n";
                        cout << "   Tahun Terbit: " << Daftar_buku[i].Tahun_terbit << "\n";
                        cout << "   Nomor ISBN: " << Daftar_buku[i].isbn << "\n\n";
                    }
                }
                break;
            }
            case 3: {
                string Cari;
                bool ditemukan = false;
                cout << "\nMasukkan Judul buku yang ingin dicari: ";
                cin.ignore();
                getline(cin, Cari);

                for (const auto& buku : Daftar_buku) {
                    if (buku.Judul == Cari) {
                        ditemukan = true;
                        break;
                    }
                }

                if (ditemukan) {
                    cout << "\nBuku ditemukan dalam perpustakaan.\n\n";
                } else {
                    cout << "\nBuku tidak ditemukan dalam perpustakaan.\n\n";
                }
                break;
            }
            case 4: {
                string judulHapus;
                bool Hapus_buku = false;
                cout << "\nMasukkan Judul buku yang ingin dihapus: ";
                cin.ignore();
                getline(cin, judulHapus);

                for (auto it = Daftar_buku.begin(); it != Daftar_buku.end(); ++it) {
                    if (it->Judul == judulHapus) {
                        Daftar_buku.erase(it);
                        Hapus_buku = true;
                        break;
                    }
                }

                if (Hapus_buku) {
                    cout << "\nBuku berhasil dihapus dari perpustakaan.\n\n";
                } else {
                    cout << "\nBuku tidak ditemukan dalam perpustakaan. Penghapusan gagal.\n\n";
                }
                break;
            }
            case 5: {
                cout << "\nTerima kasih telah menggunakan program Perpustakaan Pojok Baca.\n";
                break;
            }
            default:
                cout << "\nPilihan tidak valid. Silakan pilih operasi yang benar.\n\n";
        }
    } while (pilihan != 5);

    return 0;
}