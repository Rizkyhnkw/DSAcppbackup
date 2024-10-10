#include<iostream>
using namespace std;
int main(){
	//input usia bayi
	int u;
	string ket;
	
cout<<"masukan usia anak: ";
	cin>>u;
	
	if (u <= 5){
		ket="usia balita";
	}
	else if (u >= 6){
	    ket="bukan balita";
	}
	
	cout<<ket;
return 0;
}
