#include <stdio.h> 

/* structs are user definable type that holds
multiple pieces of data
You can essentially bundle numerous variables into a single one 
A struct is a class with only data members and no methods 
*/

struct fish {
    char *name; 
    int age; 
    float price_when_purchased; 
}; // make sure to end the struct with a semicolon at the end 

/* structs are typically defined globally*/

struct fish goldfish; // variable associated with the struct class

/* why don't we give a new fish some attributes?*/

struct fish koi = {"Kojima Koi", 2, 10.99};

struct fish carp = {.name="Carp man", .age=12, .price_when_purchased=2.14};
/* Up there ^ you can be specific about which items in your struct you want to assign to a struct variable*/

int main(void){
    printf("The name of the goldfish is %s\n", koi.name);
    /* You can also access individual fields of a struct via 
    doing something like (structvar).(structfield) = x, without the parentheses of course */
}