#include <stdio.h> 

int main() {

    int a[5] = {11, 22, 33, 44, 55}; 
    int *p = &a[0]; // references the first element of the array 

    printf("%d\n", *p); // print the value of p, which is the first element 11 
    printf("%d\n", *(p+1)); // prints 22 because we are advancing one memory location!

    for (int i = 0; i < 5; i++){
        printf("%d\n", *(p + i)); // same as p[i]! 
    }

    /* Modifying a pointer itself */

    int b[] = {12, 24, 36, 48, 60, 999}; 
    int *p_to_b = &a[0]; // points to "12" 

    while (*p_to_b != 999) { // while the item p points to isn't 999,
        printf("%d,\n", *p_to_b); // print the item 
        p++; // move the p pointer to the next int 
    }

    return 0; 

}