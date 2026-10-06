#include <stdio.h> 

int main(void) {
    int i; 
    int a[5] = {22, 37, 3489, 18, 95}; // initialize array with predefined values 

    /* compiler will throw an warning if 
    you have more items in your initializer than there is for your array*/
    /* you can have fewer in the initializer though than you have spcae in your array*/
    for (i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }

    int b[5] = {3, 4, 5}; // will pad 4th and 5th position with 0's

    for (int e = 1; e < 5; e++){
        printf("%d\n", b[e]);
    }
}