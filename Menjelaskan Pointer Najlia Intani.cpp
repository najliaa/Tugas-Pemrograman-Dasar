MENJELASKAN SUATU PROGRAM POINTER
Nama: Najlia Intani
NRP : 2C2230010
MK  : Pemrograman Dasar

Pembahasan dari kode program yang diberikan pada materi pointer:

1. Pertama-tama, kita mendeklarasikan dua variabel `a` dan `b` sebagai integer dan menginisialisasi mereka dengan nilai 123 dan 456 secara berturut-turut.
   
   ```cpp
   int a = 123;
   int b = 456;
   ```

2. Selanjutnya, kita mendeklarasikan sebuah pointer `ptr_b` yang menunjuk ke variabel `b`.
   
   ```cpp
   int *ptr_b = &b;
   ```

   Ini berarti `ptr_b` sekarang berisi alamat memori variabel `b`.

3. Kemudian, program mencetak alamat dan nilai dari variabel `a`, `b`, dan `ptr_b` menggunakan `std::cout`.

   ```cpp
   std::cout << "Nama Variabel \t Alamat \t Konten" << std::endl;
   std::cout << "a \t\t " << &a << "\t" << a << std::endl;
   std::cout << "b \t\t " << &b << "\t" << b << std::endl;
   std::cout << "ptr_b \t\t " << &ptr_b << "\t" << ptr_b << std::endl;
   ```

4. Selanjutnya, program mencetak alamat dari pointer `ptr_b` dan nilai yang ditunjuknya (`*ptr_b`).

   ```cpp
   std::cout << "*ptr_b \t " << ptr_b << "\t" << *ptr_b << std::endl;
   ```

   Di sini, `*ptr_b` mengakses nilai yang ditunjuk oleh pointer `ptr_b`, yaitu nilai dari variabel `b`.

5. Kemudian, program mengubah nilai yang ditunjuk oleh `ptr_b` menjadi 789.

   ```cpp
   *ptr_b = 789;
   ```

   Ini berarti nilai dari variabel `b` akan berubah menjadi 789 karena `ptr_b` menunjuk ke variabel `b`.

6. Terakhir, program mencetak kembali nilai dari variabel `b` dan nilai yang ditunjuk oleh `ptr_b`.

   ```cpp
   std::cout << "b \t\t " << &b << "\t" << b << std::endl;
   std::cout << "*ptr_b \t " << ptr_b << "\t" << *ptr_b << std::endl;
   ```

   Sehingga nilai dari variabel `b` berubah menjadi 789 setelah diubah melalui pointer `ptr_b`.