#include <iostream>
using namespace std;

int main() {
    string kodeArea;
    int jamAwal = 8;
    int menitAwal = 45;
    int jamAkhir = 10;
    int menitAkhir = 15;
    
    cout << "Masukkan kode area (misalnya 021 untuk Lokal): ";
    cin >> kodeArea;
    
    int dd = (jamAkhir - jamAwal) * 3600 + (menitAkhir - menitAwal) * 60;
    int dp = (dd / 15) + 1;
	 // Pembulatan ke atas
    
    int tpp;
    if (kodeArea == "021") {
        tpp = 250;
    } else if (kodeArea == "007") {
        tpp = 750;
    } else { tpp = 500;
    }
    
    int tt =tpp*dp;
    (dd>3600)? tt=0.5*tt :tt;
    
    cout<<"tarif total pemakaian telepon : Rp"<<tt<<endl;
 return 0;
}

