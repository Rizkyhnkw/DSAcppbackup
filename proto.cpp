#include <iostream>
using namespace std;

int main() {
    string kode_area;
    int d,jm,mm,js,ms;
    double t, tt;

    // Input data
    cout << "Masukkan kode area tujuan (contoh: 021, 022, 007): ";
    cin >> kode_area;
    cout << "Masukkan jam mulai (format 24 jam, contoh: 8 45): ";
    cin >> jm;
	cout<<"masukan menit mulai :";
	 cin>>mm;
    cout << "Masukkan jam selesai (format 24 jam, contoh: 10 15): ";
    cin >> js;
	 cout<<"masukan menit selesai :";
	 cin>> ms;

    // Menghitung durasi dalam detik
    d= (js-jm) * 3600 + (ms-mm) * 60;

    // Menghitung jumlah pulsa
    int p=d/ 15;

    // Menghitung tarif per pulsa
    if (kode_area =="021") {
        t= 250;
    } else if (kode_area == "007") {
        t= 750;
    } else {
        t= 500;
    }

    // Menghitung total tarif
     (d>3600)? tt=(t*p)-(0.5*t*(d-3600) / 15) :tt= t*p;

    // Output hasil
    cout << "Durasi pemakaian     : " << d / 60 << " menit " << d % 60 << " detik"<< endl;
    cout << "jumlah pulsa terpakai: " << p << endl;
    cout << "Tarif per pulsa      : Rp " << t << endl;
    cout << "Total tarif          : Rp " << tt << endl;

    return 0;
//tugas quiz1 (nama:rizky ramadhan)
}
