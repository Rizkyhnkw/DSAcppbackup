#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include<iomanip>

using namespace std;

struct data {
    char no_buku[10], judul[50], nama_pengarang[100], nama_penerbit[100];
};

data maksimal[100];
int a, b, c, d;

void inputbuku()
{
    cout << "Berapa jumlah buku yang ingin anda input? : ";
    cin >> b;

    // Validasi jumlah buku yang diinput
    while (b <= 0 || b > 100) {
        cout << "Jumlah buku tidak valid, masukkan jumlah antara 1 dan 100: ";
        cin >> b;
    }

    for (c = 0; c < b; c++) {
        cout << "\nBuku ke - " << (a + 1) << endl; 
        
        cin.ignore(); 
        cout << "Nomor Buku :\t";
        cin.getline(maksimal[a].no_buku, 10); 
        cout << "Judul Buku :\t";
        cin.getline(maksimal[a].judul, 50);
        cout << "Nama Pengarang :\t";
        cin.getline(maksimal[a].nama_pengarang, 100);
        cout << "Nama Penerbit :\t";
        cin.getline(maksimal[a].nama_penerbit, 100);
        a++; 
    }
}

void lihatbuku()
{
    int y, z;
    cout<<"=========== DAFTAR BUKU ===========\n\n";
    cout << setw(15) << "Nomor" << setw(20) << "Judul" << setw(30) << "Nama Pengarang" << setw(30) << "Nama Penerbit" << endl;
for( y=0; y<a; y++ ) {
    cout << setw(15) << maksimal[y].no_buku << setw(20) << maksimal[y].judul << setw(30) << maksimal[y].nama_pengarang << setw(30) << maksimal[y].nama_penerbit << endl;
}

    cout<<"==============================\n";
    
}

void hapusbuku()
{
    int y, z;
    cout<<"\nHapus buku ke : ";
    cin>>y;
    z = y - 1;
    a--;
    for( int i=z; i<a; i++ )
    {
        maksimal[i] = maksimal[i + 1];
    }
    cout<<"\n\n ========= Buku "<< z << " Telah terhapus ==============\n";
    getch();
}

void ubahbuku()
{
    int k, l;
    cout<<"Pilih buku yang ingin anda ubah : "; cin >> k;
    l = k - 1;
    cout<<"Nomor Buku :\t"; cin >> maksimal[1].no_buku;
    cout<<"Judul Buku :\t"; cin >> maksimal[1].judul;
    cout<<"Nama Pengarang :\t"; cin >> maksimal[1].nama_pengarang;
    cout<<"Nama Penerbit :\t"; cin >> maksimal[1].nama_penerbit;
    lihatbuku();
}


int main()
{
    int pilih;
char x;
do {
    cout << "1. Tambah Buku\n";
    cout << "2. Lihat Buku\n";
    cout << "3. Ubah Buku\n";
    cout << "4. Hapus Buku\n";
    cout << "5. Keluar Perpustakaan" << endl;
    cout << "Pilihan Kamu : "; cin >> pilih;

    switch( pilih ) {
        case 1: inputbuku(); break;
        case 2: lihatbuku(); break;
        case 3: ubahbuku(); break;
        case 4: hapusbuku(); break;
        case 5:
            cout << "Apakah anda ingin keluar? (1 untuk Ya, 0 untuk Tidak)\n"; 
            cin >> x;
            if (x == '1') {
                cout << "Keluar!" << endl;
                return 0;
            }
            break;
        default: cout << "Pilihan tidak valid!" << endl;
    }
} while (x != '1');
   
}
