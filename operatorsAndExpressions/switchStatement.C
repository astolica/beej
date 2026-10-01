#include <stdio.h>

int main(void) {
    /* take action accordng to an integer expression*/

    int coins = 2;
    switch (coins) {
        case 0: 
            printf("You have no coins.\n");
            break; 

        case 1: 
            printf("you have a singular coin\n");
            [[fallthrough]];

        case 2: 
            printf("You have a pair of coins");
            break;

        default:
            printf("You got a bunch of coins!\n");

    }
    // basically an if-else cascade... 
    // switch is often faster to jump to the correct code 
    // you can also use character types with switch because they're secretly integers
}