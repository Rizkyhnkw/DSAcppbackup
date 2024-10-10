#include <iostream>
using namespace std;

// Fungsi untuk menukar nilai dua elemen
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi partisi untuk menentukan posisi pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // memilih elemen terakhir sebagai pivot
    int i = low - 1; // indeks elemen yang lebih kecil dari pivot

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]); // menukar elemen yang lebih kecil dengan elemen di posisi i
        }
    }
    swap(arr[i + 1], arr[high]); // menempatkan pivot di posisi yang benar
    return (i + 1); // mengembalikan posisi pivot
}

// Fungsi Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // mendapatkan indeks pivot

        // Rekursi untuk bagian kiri dan kanan dari pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);
    
    return 0;
}

