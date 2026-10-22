#include <stdio.h>

/* typedefs help make code cleaner to read*/
/* typedefs are typically found in the global scope*/

typedef int antelope; // make an alias for "int" named "antelope" 
antelope x = 10; 

struct animal {
    char *name; 
    char *species; 
};

typedef struct animal animal;

// or you could just do something like this 

typedef struct animal2{
    char *name; 
    char *species
} animal2; // NEW name of the struct 

animal z; // instead of calling "struct" over and over, you can type line 14 to just call the struct

/* Anonymous Structures*/

typedef struct{
    char *name;
    char *model;
} car; // new name for the struct 

//struct car y; would be an error because there is no such struct 
car z; // works because "car" is an alias to the struct 