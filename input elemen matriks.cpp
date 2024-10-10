//input elemen matriks
#include<iostream>
using namespace std;

int main(){
	int baris, kolom, i, j, a[10][10];
	cout<<"matriks A"<<endl;
	cout<<"baris = ";cin>>baris;
	cout<<"kolom = ";cin>>kolom;
	cout<<endl;
	//input elemen dari matriks A
	for (i=1;i<=baris;i++)
	{
		for (j=1;j<=kolom;j++)
		{
			cout<<"baris "<<i<<" kolom "<<j<<" = ";
		    cin>>a[i][j];
		}
	}
	//cetak matriks A
	cout<<endl;
	cout<<"matriks A"<<endl<<endl;
	for (i=1;i<=baris;i++)
	{
		for (j=1;j<=kolom;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
