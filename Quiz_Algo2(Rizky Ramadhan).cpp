#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Data Arrays
    string mataKuliah[] = {"Algoritma & Pemrograman", "Pendidikan Agama", "Pendidikan Pancasila", "Logika Informatika", "Aljabar Linier   ", "Pengantar Teknologi", "Etika Profesi\t"};
    int sks[] = {3, 2, 2, 2, 3, 3, 2};
    char nilai[] = {'B', 'A', 'A', 'A', 'C', 'D', 'B'};

    // Constants for Bobot Nilai
    const int bobotA = 4, bobotB = 3, bobotC = 2, bobotD = 1, bobotE = 0;

    int totalSks = 0, totalMutu = 0;

    //Header
    cout << "=====Quiz algo Rizky Ramadhan=====	" <<endl;
    cout << "DAFTAR NILAI SEMESTER GANJIL\n";
    cout << "Tahun Akademik 2023/2024\n";
    cout << "Nama: Andika Pranata\n\n";
    cout << "NO\tMATA KULIAH\t\t\tSKS\tNILAI\tMUTU\n";

    // Loop through data
    for (int i = 0; i < 7; ++i) {
        cout << i+1 << "\t" << mataKuliah[i] << "\t\t|" << sks[i] << "|\t|" << nilai[i] << "|\t|";

        //kalkulasi nilai mutu
        int mutu = 0;
        if (nilai[i] == 'A') {
            mutu = sks[i] * bobotA;
        } else if (nilai[i] == 'B') {
            mutu = sks[i] * bobotB;
        } else if (nilai[i] == 'C') {
            mutu = sks[i] * bobotC;
        } else if (nilai[i] == 'D') {
            mutu = sks[i] * bobotD;
        } else if (nilai[i] == 'E') {
            mutu = sks[i] * bobotE;
        }
        cout << mutu << "|\n";

        //akumulasi Total SKS dan Total Mutu
        totalSks += sks[i];
        totalMutu += mutu;
    }

    //output Total SKS dan Total Mutu
    cout << "\nTOTAL SKS\t" << totalSks << "\n";
    cout << "TOTAL MUTU\t" << totalMutu << "\n";

    //output IPK
    float ipk = static_cast<double>(totalMutu) / totalSks;
    cout << "\nIPK\t\t" << fixed << setprecision(2) << ipk << "\n";

    return 0;
}
