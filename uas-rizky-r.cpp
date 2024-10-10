#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int cci, jum = 0;
char cc;
string teks, kata;

void start(string teks){
    cci = 0;
    if (!teks.empty()) {
        cc = teks[cci];
    }
}

void inc(string teks){
    cci++;
    if (cci < teks.length()) {
        cc = teks[cci];
    }
}

bool eop(string teks){
    return (cci >= teks.length());
}

int main(){
    ifstream myFile;
    myFile.open("UUD45.txt");

    while(getline(myFile, teks)){
        start(teks);

        while(!eop(teks)){
            if(cc == ' '){
                if(kata == "dan"){
                    jum++;
                }
                kata.clear(); 
            } else {
                kata += cc; 
            }
            inc(teks);
        }

       
        if(kata == "dan"){
            jum++;
        }
        kata.clear(); 
    }

    myFile.close();

    cout << "Jumlah Kata 'dan' ada: " << jum << " buah" << endl;
    return 0;
}
//by: Rizky ramadhan

