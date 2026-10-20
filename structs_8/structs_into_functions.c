#include <stdio.h>

struct package {
    char *name_of_item;
    float weight; // assume it's pounds, no kilograms here AMERICA BABY
    char *destination_addr;
};

void set_weight(struct package *c, float new_weight){
    (*c).weight = new_weight; // DEREFERENCE the struct so that you can be able to access it's fields.
    // otherwise it you would just be accessing its memory address and it might result in an error
}


int main(void){
    /* to pass a struct into a function you can eithe pass the struct
    itself or pass the pointer to the struct. You want to pass a pointer 
    to a struct if you need the function to make changes to the struct it was passed in, 
    or if the struct is somewhat large and expensive to copy onto the stack. The pointer is always
    better there. */

    struct package amazon_package = {.destination_addr="Seattle", 
    .weight = 12.13, .name_of_item="Happy Hacking Keyboard"};

    set_weight(&amazon_package, 15.14);

    printf("The new weight after someone added weight to reduce shipping costs is now %f\n", amazon_package.weight);

}