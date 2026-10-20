#include <stdio.h> 
#include <string.h> 

int my_strlen(char *s){

    int count = 0; 

    while (s[count] != '\0')
        count++;

    return count; 
}
int main() {

    /* string literals are sequences of characters in double quotes*/
    /*single quotes are for characters*/

    char *s = "Hello, world!"; // I made a pointer to a string literal here 
    printf("%s\n", s); // print the string out 
    // s[0] = 'z'; YOU CAN'T DO THIS because you're mutating a string literal 

    char a[] = "Hello World!"; // the compiler can figure out the size for you and adjust the array accordingly 
    a[0] = 'z'; // you CAN do this, because it is an array, so you're just changing one of it's elements
    for (int i =0; i < 13; i++){ // printing 13 characters 
        printf("%c", a[i]);
    printf("\n");
    }

    printf("The string size is %zu bytes long\n", strlen(a)); // using strlen to get the string length 

    /* 
    A string is defined by
    a pointer to the first character to a string 
    that indicates that the string has ended
    and a zero-valued null byte somewhere in memory after the pointer
    */

    char *v = "Hello!"; // is actually "Hello\0", with a sentinel character at the end

    printf("%d", my_strlen(a)); // calls function from before 

    // if you want a copy of a string you have to copy it byte for byte 

    // made easier with the strcpy() funtion 

    char k[] = "Hello there!";
    char t[100]; 

    strcpy(k,t); // source pointer is the first argument 
}