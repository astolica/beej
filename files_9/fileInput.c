#include <stdio.h> 

int main(void){

    int c; 
    FILE *fp; // variable fp to represent open file, a pointer to it, at least 

    fp = fopen("hello.txt", "r"); // open the file only in "read" mode

    if (fp == NULL){
        fprintf(stderr, "Error with opening file, concluding..\n");
        return -1;
    }

    while ((c = fgetc(fp)) != EOF){
        printf("%c", c);
    }
    printf("\n");

    


    fclose(fp); // good housekeeping 

    return 0;
}