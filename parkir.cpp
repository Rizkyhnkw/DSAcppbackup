#include<iostream>
using namespace std;

int main(){
	int jm,jk,lp,jp;
	//input
	jm=9;
	jk=10;
	
	//proses
	lp=jk-jm;
	jp=3000;
	
	(lp>1)? jp=3000+(lp-1)*1000 :jp=3000;
	//output
	cout<<"jasa parkir yang anda bayarkan sebesar Rp"<<jp;
	//1 jam pertama 3000,perjam 1000
	return 0;
}
