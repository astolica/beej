#include <stdio.h> 
#include <string.h> 

int main(void) {
    /* A void pointer is a pointer to an existing thing, but the 
    void part indicates we do not know the TYPE of thing. Let's you be
    a whole lot more flexible with C. */

    // YOU CANNOT DO POINTER ARITHMETIC ON A VOID POINTER! 
    // You also can't dereference a void pointer.. 
    // You also can't use the arrow operator on a void pointer
    // void *memcpy(void *s1, void *s2, size_t n); more on this later

    int a[] = {11, 22, 33}; 
    int b[3]; 

    memcpy(b, a, 3 * sizeof(int)); // copies 3 ints of data from a into b 

    printf("%d\n", b[1]); // prints out 22 


}