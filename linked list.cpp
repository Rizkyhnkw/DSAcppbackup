#include<iostream>
using namespace std;

struct node{
	int no,harga,qty,wi;
	string nama_barang,satuan;
	node *next;
	
};
int main(){
	node *node1,*node2,*node3,*node4, *node5;
	
	node1= new node;	
	node2= new node;		
	node3= new node;
	node4= new node;
	node5= new node;
	//isi node
	node1->no=1;
	node1->nama_barang="sabun";
	node1->satuan="pcs";
	node1->harga=5500;
	node1->qty=15;
	node1->next=node2;
	
		node2->no=2;
	node2->nama_barang="minyak";
	node2->satuan="sachet";
	node2->harga=3500;
	node2->qty=20;
	node2->next=node3;
	
	node3->no=3;
	node3->nama_barang="Minyak Bimoli";
	node3->satuan="botol";
	node3->harga=27000;
	node3->qty=12;
	node3->next=node4;
	
	node4->no=4;
	node4->nama_barang="biscuit roma";
	node4->satuan="pcs";
	node4->harga=15000;
	node4->qty=10;
	node4->next=node5;
	
	node5->no=5;
	node5->nama_barang="Kecap ABC";
	node5->satuan="Botol";
	node5->harga=25000;
	node5->qty=5;
	node5->next=NULL;
	
	
	//cetak
	node *cur;
	cur=node1;
//	wi = nama_barang,satuan,harga,qty,no;
	while(cur !=NULL){
		cout<<cur->no<<" "<<cur-> nama_barang<<" "<<cur-> satuan<<" "<<cur-> harga<<" "<<cur-> qty <<" "<<endl;
		cur=cur->next;
	}
	return 0;
}

