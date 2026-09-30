#include <stdio.h> 

// C has Boolean Types, true or false
// in C 0 is false, and any number other than 0 is true 
int main(){
    int x = 1;
    if (x){
        printf("x is true \n");
    }

    // in C23 you get actual bool, true and false 
    // However youc an #include <stdbool.h> to get the same thing 

    bool y = true; 
    if (y) {
        printf("y is true\n");
    }

    printf("%d\n", true == 12); // will print 0 because true is equal to 1 here
                                // when evaluated, 1 == 12 is FALSE, therefore printing 0 


}