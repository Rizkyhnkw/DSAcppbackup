#include<iostream>
using namespace std;
int main(){
	//input nilai
	int nm, np, nr;
	string ket;
	
	cout<<"masukan nilai tes matematika: ";
	cin>>nm;
	cout<<"masukan nilai tes psikotes  : ";
	cin>>np;
	
	nr=(nm + np) / 2;
	
	if (nr > 74){
		ket="lulus tes";
	}
	else if (nr <= 74){
	    ket="gagal tes";
	}
	cout<<endl;
	cout<<"anda dinyatakan "<<ket;
return 0;
}
