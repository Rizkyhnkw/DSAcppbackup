#include<iostream>
#include<stdlib.h>

void rekursi(int val){
	if(val>0){
		printf("step rec %d\n", val);
		rekursi(--val);
		printf("step rec %d\n", val);
	}
}

int main(int argc, char *argv[]){
	rekursi(3);
	return 0;
}


