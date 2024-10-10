//matriks transpose
#include<iostream>
using namespace std;

int main(){
	int baris, kolom, i, j, a[10][10],at [10][10];
	cout<<"matriks A"<<endl;
	cout<<"baris = ";cin>>baris;
	cout<<"kolom = ";cin>>kolom;
	cout<<endl;
	//input elemen matriks a
	for (i=1;i<=baris;i++)
	{
		for (j=1;j<=kolom;j++)
		{
			cout<<"baris "<<i<<" kolom "<<j<<" = ";
		    cin>>a[i][j];
		}
	}
	//proses transpose
	for (i=1;i<=baris;i++)
	{
		for (j=1;j<=kolom;j++)
		{
			at[i][j] = a[j][i];
		}
	}
	//cetak matriks transpose
	cout<<endl;
	cout<<"matriks transpose"<<endl;
	for (i=1;i<=baris;i++)
	{
		for (j=1;j<=kolom;j++)
		{
			cout<<at[i][j]<<"  ";
		}
		cout<<endl;
	}
	 
}
