#include <stdio.h> 

int main(void) {
    
    /* a[b] = *(a + b) */

    int a[] = {11, 22, 33, 44, 55}; 

    int *p = a; // p points to the first element of a, which is 11

    for (int i = 0; i < 5; i++){
            printf("%d\n", a[i]); 
        }

    for (int i = 0; i < 5; i++){
            printf("%d\n", p[i]); 
        }

    for (int i = 0; i < 5; i++){
            printf("%d\n", *(a + i)); 
        }

    for (int i = 0; i < 5; i++){
            printf("%d\n", *(p + i)); 
        }

    for (int i = 0; i < 5; i++){
            printf("%d\n", *(p++)); // moving pointer p up the array 
        }

}