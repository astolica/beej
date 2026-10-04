#include <stdio.h> 

int main(void) {
    int i = 10; // this is just a regular 'ol int type
    int *p; // this a POINTER TO an int, or an int-pointer
    p = &i; // we are storing the address of I into p 

    *p = 20; // the pointer that points to I is dereferenced, meaning I is now 20! 
    printf("The VALUE of i is %d\n", i);
    printf("The ADDRESS Of i is %p\n", &i);
    /*simply put, a pointer is a variable that holds an address */
    return 0; 
}