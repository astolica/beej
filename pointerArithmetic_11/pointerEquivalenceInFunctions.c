#include <stdio.h> 

int my_strlen(char *s){
    return 0; 
}
int main() {
    char s[] = "Antelopes"; // array 
    char *t[] = "Wombats"; // pointer to array 

    printf("%d\n", my_strlen(s)); // both of these function calls work 
    printf("%d\n", my_strlen(t)); 
}