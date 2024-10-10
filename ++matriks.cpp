#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	int a[2][2] = {{2,4},{5,6}};
	int b[2][2] = {{3,2},{4,6}};
	int c[2][2];
	
	for(x=0;x<2;x++){
		for(y=0;y<2;y++){
		c[x][y]=a[x][y]+b[x][y];
		}
	}
	for(x=0;x<2;x++){
		for(y=0;y<2;y++){
		cout<<c[x][y] << "  ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
