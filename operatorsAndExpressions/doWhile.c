#include <stdio.h> 

int main() {
    int i = 10;
    
    while (i < 10) {
        printf("while: i is %d\n", i);
        i++;
    }
    
    i = 10; 

    do {
        printf("do-while: i is %d\n", i); // this executes even when condition below is not true, however only once 
        i++; 
    } while (i < 10);
    
    printf("all done."); 
}