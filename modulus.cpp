#include<iostream>
using namespace std;

int main(){
	//deklarasi variabel
	int bil,x;
	string ket;
	
	//bagian input
	cout<<"masukan bilangan :"; cin>>bil;
	//bagian proses
	x=bil % 2;
	(x==0)?ket="genap":ket="ganjil";	
	
	//bagian output
	cout<<endl;
	cout<<bil <<" adalah bilangan " <<ket;
	return 0;
}