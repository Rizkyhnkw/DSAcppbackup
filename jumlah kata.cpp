#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int cci;
int jum = 0;  // Initialize jum to 0
char cc;
string teks;

void start(string teks){
    cci = 0;
    cc = teks[cci];
}

void inc(string teks){
    cci++;
    cc = teks[cci];
}

bool eop(string teks){
    if(cc == 'E' || cci >= teks.length()){
        return true;
    } else {
        return false;
    }
}

void adv(string teks){
    do {
        inc(teks);
    } while(cc == ' ');
}

void ch(string teks){
    do {
        inc(teks);
    } while(cc == 'A' || cc == 'I' || cc == 'U' || cc == 'E' || cc == 'O');
}

int main(){
    ifstream myfile;
    myfile.open("aa.txt");
    
    while(!myfile.eof()){
        getline(myfile, teks);
        start(teks);
        while(!eop(teks)){
            if(cc == 'A' || cc == 'I' || cc == 'U' || cc == 'E' || cc == 'O' || 
               cc == 'a' || cc == 'i' || cc == 'u' || cc == 'e' || cc == 'o'){
                jum++;
            }
            inc(teks);
        }
    }

    cout << endl;
    cout << "Jumlah huruf vokal: " << jum;
    myfile.close();
//     system("pause");
    return 0;
}

