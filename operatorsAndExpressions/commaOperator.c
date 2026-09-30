#include <stdio.h> 

int main() {
    int x, y; 
    x = 10, y = 20; // comma operators are used here as a single expression! 
    // with the comma operator, the value of the comma expression is the value of the righemost one 

    // ex. 
    x = (1,2,3);
    printf("%x is %d\n", x); // prints 3 because 3 is the rightmost in comma list 

    // again, most common in for loops as you'll see later 

}