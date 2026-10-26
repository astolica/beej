#include <stdio.h> 
#include <stdlib.h> 

int main() {
    /* Calloc is a cooler malloc
    The parameters are malloc(num of elements to alloacate, size of one element)*/
    int *p  = calloc(10, sizeof(int));  

    int *q = malloc(10 * sizeof(int)); // manually alloacte enough space for 10 integers 
    memset (q, 0, 10 * sizeof(int)); // set the memory to 0 (boring just use calloc) 

    return 0; 
}