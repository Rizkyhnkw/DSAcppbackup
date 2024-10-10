#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//deklarasi variabel dengan tipe data class stream
	ofstream myFile;
	
	/*//membuka file external dengan fungsi open
	myFile.open("dataku.txt");
	
	//menulis data ke file dataku
	myFile<<"Ini adalah data pertamaku"<<endl;
	myFile<<"yang tersimpan"<<endl;
	myFile<<"sangat mudah";
	
	myFile.close();*/
	
	//deklarasi variabel dengan tipe data class stream
	ifstream mf;
	string isifile;

	mf.open("dataku.txt");

	while(!mf.eof()){
	
	getline(mf,isifile);
	cout<<isifile<<endl;}
	return 0;
}

