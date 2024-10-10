#include<iostream>
#include<fstream>
using namespace std;

int main(){
//deklarasi variabel dengan class stream
ofstream mf;
string nik[5],nama[5];
float tun[5],pph[5];
int gapok[5],gaji[5],x;

//membuka file external dengan func open
mf.open("datagaji.txt",ios::app);

//input data karyawan
for(x=0;x<=4;x++){
	cout<<"NIK        :" ; cin>>nik[x];
	cout<<"Nama       :" ; cin>>nama[x];
	cout<<"Gaji pokok :" ; cin>>gapok[x];
}
//hitung gaji
for(x=0;x<=4;x++){
tun[x]=20.0/100*gapok[x];
pph[x]=15.0/100*(tun[x]+gapok[x]);
gaji[x]=gapok[x]+tun[x]-pph[x];	
}
//simpan data karyawan ke file external
mf<<"Daftar gaji karyawan" <<endl;
mf<<"====================" <<endl;
for(x=0;x<=4;x++){
	mf<<x+1 <<"  " <<nik[x] <<"  " <<nama[x] <<"  " <<tun[x] << "  " <<pph[x] <<"  " <<gaji[x] <<endl;
}

mf.close();
return 0;
}
