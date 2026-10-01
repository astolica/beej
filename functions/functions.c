#include <stdio.h>

int plus_one(int n){ // function definition, int defines the return type 
    return n + 1;  // arguments and return values are predeclared 
    /* parameters are copies, not the original*/
    /* functions rely on their own local copies*/
} 

void hello(void){
    printf("Hello, world!\n"); // function has no arguments and no return value 
}

int main() {
    int x = plus_one(3);
    hello(); 
    printf("%d", x);
}
