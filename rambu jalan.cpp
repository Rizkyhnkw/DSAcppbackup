#include<iostream>
using namespace std;
int main(){
	//input warna
	char warna;
	string ket;
	
cout<<"masukan warna lampu[M/H/K]: ";
	cin>>warna;
	
	/*if (warna=='m'){
		ket="berhenti";
	}
	else if (warna=='h'){
	    ket="berjalan";
	}else {ket="berhati hati";
	}*/
	
	switch (warna){
		case 'm':
			ket="berhenti";
			break;
		case 'h':
			ket="berjalan";
			break;
		case 'k':
			ket="berhati-hati";
			break;
			
			
	}
	
	cout<<"kendaraan harus "<<ket;
return 0;
}
