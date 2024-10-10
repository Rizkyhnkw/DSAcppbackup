#include<iostream>
using namespace std;

struct barang{
		string kode,nama,satuan;
		int harga,stok;
		
	};

int main(){
	//dekralasi variabel
	barang brg;
	
	//masukan data barang
	
	cout<<"kode barang  :"; cin>>brg.kode;
	cout<<"nama barang  :"; getline(cin, brg.nama); cin>>brg.nama;
	cout<<"satuan barang:"; cin>>brg.satuan;
	cout<<"harga barang :"; cin>>brg.harga;
	cout<<"stok barang  :"; cin>>brg.stok;
	
	//proses
	
	//menampilkan
	
	cout<<endl<<"MENAMPILKAN DATA BARANG" <<endl;
	cout<<"===============================" <<endl;
	cout<<"Kode barang  :" <<brg.kode <<endl;
	cout<<"nama barang  :" <<brg.nama <<endl;
	cout<<"satuan barang:" <<brg.satuan <<endl;
	cout<<"harga barang :" <<brg.harga <<endl;
	cout<<"stok barang  :" <<brg.stok <<endl;
	
	return 0;
}
