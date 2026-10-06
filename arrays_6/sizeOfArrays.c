#include <stdio.h> 

int main() {
    int x[12]; 

    printf("%zu\n", sizeof x);
    printf("%zu\n", sizeof(int));

    printf("%zu\n", sizeof x / sizeof(int)); // this only wrorks in the scope the array was defined 

}