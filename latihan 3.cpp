#include<iostream>
using namespace std;

int main(){
		//bagian deklarasi variabel
		int w,j,dj,sd,m,dm,d;
		
		//input
		w=7425;
		
		//bagian proses
		j=w/3600;
		dj=j*3600;
		sd=w-dj;
		m=sd/60;
		dm=m*60;
		d=sd-dm;
		
		//bagian output
		cout<<"hasil konversi menjadi: "<<j <<"jam" <<m <<"menit" <<d <<"detik";	
		
		return 0;
}
