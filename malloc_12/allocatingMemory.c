#include <stdio.h> 
#include <stdlib.h> 


/* Shit gets real here */

/* You manually allocated memory? You have to manually free it too.*/

int main() {
    int *p = malloc(sizeof(int)); // manually alloacte space for a single int 
    *p = 12; //store something in the pointer 

    printf("%d\n", *p); // print the value out 


    /* ERROR CHECKING*/

    int *x; 
    x = malloc(sizeof(int) * 10); 

    if (x == NULL) {
        fprintf(stderr, "Error allocating 10 ints");
        return 1; 
    }

    /* Allocating Space for an Array*/

    char *p = malloc(3480); // allocated 3490 bytes into the pointer for us to use 

    int *c = malloc(sizeof(int) * 10); // allocate space for 10 ints 

    for (int i = 0; i < 10; i++){
        p[i] = i * 5; // stores i + 5 into the array 
    }

    for (int i = 0; i < 10; i++){
        printf("%d\n", p[i]); // // prints each element of the array out
    }

    free(p); // freeing p from memory's grasp 

}