#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// deklarasi variabel global
int cci, jum;
char cc;
string teks, kata, stopWord;

void start(string teks){
    cci = 0;
    cc = teks[cci];
}

void inc(string teks){
    cci++;
    cc = teks[cci];
}

bool eop(string teks){
    return (cc == '.' || cci >= teks.length());
}

void adv(string teks){
    do{
        inc(teks);
    } while(cc == ' ');
}

int main(){
    ifstream myfile;
    myfile.open("P_UUD45.txt");

    cout << "Masukan kata penghenti: ";
    getline(cin, stopWord);

    while(!myfile.eof()){
        getline(myfile, teks);
        start(teks);
        while(!eop(teks)){
            if(cc == ' '){
                if(kata == stopWord){
                    cout << "Kata penghenti ditemukan: " << kata << endl;
                    break;
                }
                cout << kata << endl;
                kata.clear();
            } else {
                kata += cc;
            }
            inc(teks);
        }
        if(kata == stopWord){
            cout << "Kata penghenti ditemukan: " << kata << endl;
            break;
        }
        cout << kata << endl; // print the last word if there is no space at the end
        kata.clear();
    }
    myfile.close();
    return 0;
}
