#include <iostream>
#include <string>

// Struktur data untuk menyimpan informasi siswa
struct Siswa {
    std::string nama;
    std::string id;
    std::string kelas;
};

// Fungsi untuk menampilkan informasi siswa
void tampilkanInfo(Siswa s) {
    std::cout << "Nama: " << s.nama << std::endl;
    std::cout << "ID: " << s.id << std::endl;
    std::cout << "Kelas: " << s.kelas << std::endl;
}

int main() {
    // Membuat objek siswa
    Siswa siswa;
    siswa.nama = "John Doe";
    siswa.id = "12345";
    siswa.kelas = "XII A";

    // Menampilkan informasi siswa
    tampilkanInfo(siswa);

    return 0;
}
