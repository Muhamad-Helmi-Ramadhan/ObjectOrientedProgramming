#include <iostream>
using namespace std;

// Kelas Kalkulator untuk operasi aritmatika
class Kalkulator {
private:
    double angka1, angka2;

public:
    // Konstruktor untuk menginisialisasi angka
    Kalkulator(double a, double b) {
        angka1 = a;
        angka2 = b;
    }

    // Method untuk menjumlahkan dua angka
    double tambah() {
        return angka1 + angka2;
    }

    // Method untuk mengurangi dua angka
    double kurang() {
        return angka1 - angka2;
    }

    // Method untuk mengalikan dua angka
    double kali() {
        return angka1 * angka2;
    }

    // Method untuk membagi dua angka, dengan penanganan jika angka2 = 0
    double bagi() {
        if (angka2 != 0) {
            return angka1 / angka2;
        } else {
            cout << "Error: Pembagian dengan nol!" << endl;
            return 0;
        }
    }
};

int main() {
    // Membuat objek kalkulator dengan angka 10 dan 5
    Kalkulator kalkulator(10, 5);

    // Menampilkan hasil operasi aritmatika
    cout << "Penjumlahan: " << kalkulator.tambah() << endl;
    cout << "Pengurangan: " << kalkulator.kurang() << endl;
    cout << "Perkalian: " << kalkulator.kali() << endl;
    cout << "Pembagian: " << kalkulator.bagi() << endl;

    return 0;
}
