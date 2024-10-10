#include <stdio.h>
#include<stdlib.h>

void recurs(int level);
void recurs(int level){
   // int result = level%2;
    if(level>0){
        if(level%2 !=1){
        printf("step in recursion ->val %d\n",level);
        
        }
    }
    recurs(--level);
}
int main(int argc, char **argv) {
    // Write C++ code here
    recurs(10);

    return 0;
}
