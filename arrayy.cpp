#include<iostream>
using namespace std;
int main(){
	int a[4] = {1,3,5,6};

	
	 for(int i : a) {
               if(i == 3 || i == 5) {
            cout << i << "\n";
        }
	}
}
