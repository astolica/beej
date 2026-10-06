#include <stdio.h> 

int main(void) {
    int i; 
    float f[4]; // declare an array of 4 floats 
    f[0] = 3.141599; // array indexing starts at 0 
    f[1] = 2.123123;
    f[2] = 6.43432;
    f[3] = 2.43534;

    for (i = 0; i < 4; i++){
        printf("%f\n", f[i]);
    }
}