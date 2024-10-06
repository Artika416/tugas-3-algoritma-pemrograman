#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Barang {
    string nama;
    double harga;
    int jumlah;
};

int main() {
    vector<Barang> daftarBarang;

    char lagi;

    do {
        Barang barang;
        cout << "Masukkan nama barang: ";
        cin.ignore(); // Membersihkan buffer input
        getline(cin, barang.nama); // Membaca nama barang dengan spasi

        cout << "Masukkan harga per unit: ";
        cin >> barang.harga;

        cout << "Masukkan jumlah terjual: ";
        cin >> barang.jumlah;

        daftarBarang.push_back(barang);

        cout << "Apakah ingin memasukkan data penjualan lagi? (y/n) ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    // Menampilkan laporan
    cout << "\nLaporan Penjualan:\n";
    cout << "---------------------------------------------------------\n";
    cout << "No\tNama Barang\tHarga\tJumlah\tTotal\n";
    cout << "---------------------------------------------------------\n";

    double totalPendapatan = 0;
    for (int i = 0; i < daftarBarang.size(); i++) {
        double totalBarang = daftarBarang[i].harga * daftarBarang[i].jumlah;
        cout << i + 1 << "\t" 
             << daftarBarang[i].nama << "\t\t"
             << daftarBarang[i].harga << "\t"
             << daftarBarang[i].jumlah << "\t"
             << totalBarang << endl;

        totalPendapatan += totalBarang;
    }
    cout << "---------------------------------------------------------\n";
    cout << "Total Pendapatan: " << totalPendapatan << endl;

    return 0;
}
