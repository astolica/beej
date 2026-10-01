#include <stdio.h> 

int foo(void); // function prototype
               // indicate the data types for your parameters if any for later use 

int main() {
    int z; 
    z = foo(); // foo has already been declared above so we can call it 
    printf("%d\n", z); 



}

int foo(){ 
    return 3490;
}