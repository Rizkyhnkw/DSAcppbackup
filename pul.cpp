#include<iostream>
using namespace std;

int main(){
	int jm,js,mm,ms;
	string ka;
	double tpp;
	
	//masukan data
	cout<<"masukan jam mulai    :"; cin>>jm;
	cout<<"masukan menit mulai  :";cin>>mm;
	cout<<"masukan jam selesai  :"; cin>>js;
	cout<<"masukan menit selesai:"; cin>>ms;
	cout<<"masukan kode area    :"; cin>>ka;
	//hitung durasi pangggilan dalam detik
	int d=((js-jm)*3600)+((ms-mm)*60);
	
	//tentukan tarif pulsa sesuai kode area
	if(ka=="021"){tpp=250.0;}
	else if(ka.substr(0,2)=="0xx"){tpp=500.0;
	} else if(ka=="007"){tpp=750.0;
	}else{cout<<"kode area tidak valid"<<endl;
	return 1;
	}
	//hitung jumlah yang digunakan
	int jp=d/15;
	//hitung tarif normal
	
	
	
	
	
	
	
	

return 0;
}



