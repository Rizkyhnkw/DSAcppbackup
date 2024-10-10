#include<iostream>
using namespace std;

int main(){
	int a[12]= {7,8,6,9,6,7,9,6,5,4} ,sum=0, i=0;
	int length = sizeof(a)/sizeof(a[0]);
while(i < length){
	sum = sum+a[i];
	i++;
}
float avg = static_cast<float>(sum) / length;
cout<<avg;
}
