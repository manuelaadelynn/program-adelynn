#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int jumlahCangkir;
    double kafeinPerCangkir, totalKafein;

    // Meminta input dari pengguna
    cout << "Masukkan jumlah cangkir kopi yang diminum: ";
    cin >> jumlahCangkir;

    cout << "Masukkan kandungan kafein per cangkir dalam kemasan: ";
    cin >> kafeinPerCangkir;

    // Menghitung total kafein
    totalKafein = jumlahCangkir * kafeinPerCangkir;

    // Menampilkan hasil
    cout << "Total kafein yang dikonsumsi: " << totalKafein << "mg" << endl;

    return 0;
}