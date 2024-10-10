#include <stdio.h>

// Fungsi untuk melakukan sequential search
void seq(int a[], int length, int key) {
    bool status = false;
    
    // Loop untuk mencari elemen di array
    for(int i = 0; i < length; i++) {
        if(a[i] == key) {
            printf("%d ada di indeks ke %d\n", key, i);  // Tampilkan hasil jika ditemukan
            status = true;
            break;
        }
    }
    
    // Jika elemen tidak ditemukan
    if(!status) {
        printf("%d tidak ada dalam array\n", key);  // Tampilkan jika tidak ditemukan
    }
}

int main() {
    int a[5] = {1, 5, 5, 3, 5};  // Deklarasi array
    
    int key;  // Deklarasi elemen yang ingin dicari
    
    // Menerima input dari pengguna
    printf("Masukkan angka yang ingin dicari: ");
    scanf("%d", &key);
    
    // Menghitung panjang array
    int length = sizeof(a) / sizeof(a[0]);
    
    // Memanggil fungsi sequential search
    seq(a, length, key);
    
    return 0;
}

