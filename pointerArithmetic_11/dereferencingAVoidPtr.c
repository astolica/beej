/* 
Now you can't REALLY dereference a void pointer
however, you can convert the void * to another type
before you use it. 
*/
#include <stdio.h>

int main(){ 
    char a = 'X'; 

    void *p = &a; 
    char *q = p; // so now it's a char pointer instead of a void pointer 

    printf("%\n", *q); // you can't print *p because, well, it's not allowed by the compiler :p
}