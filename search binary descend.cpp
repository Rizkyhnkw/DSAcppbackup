#include<iostream>
using namespace std;
int main(){
	int n[10]={81,76,21,18,16,13,10,7,2,1};
	bool ketemu=false;
	int i,j,k,bil;
	
	i=0;
	j=9;
	cout<<"masukan nilai yang dicari :"; cin>>j;
	
	while(!ketemu and i<j){
	k=(i+j)/2;
	if(n[k]==bil){
		ketemu=true;
	}else if(n[k]>bil){
		i=k+1;
	}else{
		j=k-1;
	}
}
if(ketemu){
	cout<<"data ditemukan pada indeks ke:" <<k;
}else{
	cout<<"data tidak ditemukan";
}
return 0;}
