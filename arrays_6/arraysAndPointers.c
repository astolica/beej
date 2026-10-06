#include <stdio.h> 

int main(void) {
    int a[5] = {11, 22, 33, 44 ,55};
    int *p;

    p = &a[0]; // p points to the array, the first element of it 

    printf("%d\n", *p); // dereferencing the pointer and getting the value 
}