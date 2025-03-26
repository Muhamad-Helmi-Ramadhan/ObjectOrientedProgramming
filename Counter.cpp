#include <iostream>

// Struktur data untuk menyimpan hitungan
struct Counter {
    int count;
};

// Fungsi untuk menambah hitungan
void tambah(Counter &c) {
    c.count++;
}

// Fungsi untuk mendapatkan nilai hitungan
int getCount(Counter c) {
    return c.count;
}

int main() {
    // Membuat objek Counter
    Counter counter = {0};
    
    // Menambah hitungan
    tambah(counter);
    tambah(counter);
    
    // Menampilkan hasil hitungan
    std::cout << "Hitungan Saat Ini: " << getCount(counter) << std::endl;
    
    return 0;
}
