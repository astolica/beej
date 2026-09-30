#include <stdio.h>

int main() {
    // print numbers between 0 and 9 (inclusive)

    int i = 0; 
    while (i < 10) {
        printf("i is currently %d", i);
        i++;
    }


    // with a for loop 
    for (i = 0; i < 10, i++;){
        printf("i is %d\n", i);
    }

    /* an empty for like for(;;) will run forever*/
}