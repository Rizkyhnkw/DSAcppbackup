#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    string arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(string value) {
        if (top == 99) { // Cek jika stack penuh
            cout << "Stack overflow!" << endl;
            return;
        }
        top++;
        arr[top] = value; // Masukkan nilai ke stack pada posisi `top`
        cout << "Elemen \"" << value << "\" telah ditambahkan ke stack." << endl;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack underflow! Tidak ada elemen untuk dihapus." << endl;
            return;
        }
        cout << "Elemen \"" << arr[top--] << "\" telah dihapus dari stack." << endl;
    }

    void peek() {
        if (top < 0) {
            cout << "Stack kosong! Tidak ada elemen teratas." << endl;
            return;
        }
        cout << "Elemen teratas stack: " << arr[top] << endl;
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
  Stack stack; // Membuat objek stack
  int choice;
  string value;
  do {
    cout << "\nMenu Stack:" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Cek apakah stack kosong" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilih opsi: ";
    cin >> choice;

    if (cin.fail()) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Input tidak valid. Silakan coba lagi." << endl;
      continue;
    }

    switch (choice) {
      case 1:
        cout << "Masukkan elemen yang ingin ditambahkan: ";
        cin >> value;
        stack.push(value);
        break;
      case 2:
        stack.pop();
        break;
      case 3:
        stack.peek();
        break;
      case 4:
        if (stack.isEmpty()) {
          cout << "Stack kosong." << endl;
        } else {
          cout << "Stack tidak kosong." << endl;
        }
        break;
      case 5:
        cout << "Keluar dari program." << endl;
        break;
      default:
        cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
    }
  } while (choice != 5);
  return 0;
}

