#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int cci,jum;
char cc;
string teks;

void start(string teks){
	cci=0;
	cc=teks[cci];
}
void inc(string teks){
	cci++;
	jum=cci-1;
	cc=teks[cci];
}
bool eop(string teks){
	if(cc == 'E' or cci>teks.length()){
		return (true);
	}else{
	return (false);}
}
void adv(string teks){
do{inc(teks);
//}while(cc==' ');
}while(cc==' ' //or  cc == 'A' or  cc=='I' or  cc=='U' or  cc=='E' or  cc=='O'
);
}
int main(){
//	mencetak karakter dari teks yang dimasukkan
cout<<"masukan teks: "; getline(cin,teks);
start(teks);
while(!eop(teks)){
	if(!(cc == 'A' or  cc=='I' or  cc=='U' or  cc=='E' or  cc=='O')){
//	if(  cc == 'A','I','U','E','O'){
		cout<<cc<<endl;
		inc(teks);
}
}

cout<<jum;
return 0;
}

