#include <iostream>
#include <cmath>

// Struktur data untuk menyimpan koordinat titik
struct Point {
    double x;
    double y;
};

// Fungsi untuk menghitung jarak dari titik ke titik asal (0,0)
double hitungJarakDariAsal(Point p) {
    return std::sqrt(p.x * p.x + p.y * p.y);
}

int main() {
    // Membuat objek Point
    Point point = {3, 4};
    
    // Menampilkan jarak dari titik asal
    std::cout << "Jarak dari Asal: " << hitungJarakDariAsal(point) << std::endl;
    
    return 0;
}
