#include <stdio.h> 

int main() {
    int x, y;
    if (x < 10 && y <20)
        printf("Doing something!\n");

    if (x < 10 || y <20)
        printf("Doing something!\n");

    if (!(x < 10))
        printf("x is not less than 10\n");

    
}