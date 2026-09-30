#include <stdio.h> 
#include <stdlib.h> 

int main(void) {
    int r; 

    do {
        r = rand() % 100; 
        printf("%d\n", r); 
    } while (r != 37); 
    /* rand() is weird because it produces the same
    random numbers each time, however, you can seed the
    value with srand() in order to get a seeded random value 
    using time() (in seconds) that is somewhat more random*/
}