#include <stdio.h>

int main() {
    int i; 
    int j; 

    i++; // add 1 to i (post increment)
    i--; // subtract one from 1 (post decrement) 

    ++i; // add one to i (pre increment) 
    --i; // subtract one from i(pre decrement)

    i = 10; 
    j = 5 + i++; // compute 5+i and then increment i once 

    i = 11; 
    j = 5 + ++i; // increment i then compute 5 + i 

    // commonly utilized in a for loop 
}