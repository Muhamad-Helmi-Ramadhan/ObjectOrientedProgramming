#include <iostream>

// Struktur data untuk menyimpan informasi persegi panjang
struct Rectangle {
    double panjang;
    double lebar;
};

// Fungsi untuk menghitung luas
double hitungLuas(Rectangle r) {
    return r.panjang * r.lebar;
}

int main() {
    // Membuat objek Rectangle
    Rectangle rectangle;
    rectangle.panjang = 5;
    rectangle.lebar = 10;

    // Menampilkan luas persegi panjang
    std::cout << "Luas Persegi Panjang: " << hitungLuas(rectangle) << std::endl;
    
    return 0;
}
