#include <stdio.h> 

int main(void) {

    FILE *fp; 
    int x = 32; 

    fp = fopen("output.txt", "w");

    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d"); // you can use fputc(), fputs(), and fprintf() to write text streams 
    fputs("Hello, world\n", fp);

    fclose(fp);
    return 0; 
}