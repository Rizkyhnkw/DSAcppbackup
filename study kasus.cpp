#include<iostream>
using namespace std;
int main(){
string nama[10]={"sinta","dewi","deni","dodo",
"yanti","reni","ilham","rudi","yuli","budi"};
int x;
string n;
cout<<"Masukan nama yang ingin anda cari : "; cin>>n;

	for(x=0;x<11;x++){
		if(nama[x]==n){
			break;
		}
	}
	if(x==10){
		cout<<"Nama yang dicari tidak ditemukan";
	}else{
		cout<<"nama yang anda cari ada pada index ke :" <<x;
	}
	return 0;
	//Uas studi kasus Rizky Ramadhan
}
