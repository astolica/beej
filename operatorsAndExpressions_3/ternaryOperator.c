#include <stdio.h> 

int main() {
    int y; 
    int x; 
    
    y += x > 10? 17: 37;

    // the expression above is equivalent to 

    if (x > 10)
        y +=17; 
    else 
        y += 37; 
}