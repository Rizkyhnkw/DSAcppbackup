#include<iostream>
using namespace std;

int main(){
	//bagian deklarasi variabel
	int j,m,d,td;
	
	//input
	cout<<"masukan nilai jam   :"; cin>>j;
	cout<<"masukan nilai menit :"; cin>>m;
	cout<<"masukan nilai detik :"; cin>>d;
	
	//bagian proses
		td=(j*3600)+(m*60)+d;
		
		//bagian output
		cout<<"hasil konversi waktu ke detik menjadi:" <<td;
		
	
	
	
	
	return 0;
}
