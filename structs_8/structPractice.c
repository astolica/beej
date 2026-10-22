#include <stdio.h> 

typedef struct STUDENT {
    int id_number;
    float grade; 
} STUDENT;  // gives an alias to the struct "STUDENT" as "STUDENT", so the same thing.. 


int main(){
    
    STUDENT student1 = {}; 

    STUDENT *ptr = &student1; 

    ptr->id_number = 10128;
    ptr->grade = 80.99;

    printf("The student has an ID number of %d, and a grade of %.2f\n", ptr->id_number, ptr->grade);

    printf("The size of an integer is: %zu\n", sizeof(int)); 

    printf("The size of the struct is %zu\n", sizeof(STUDENT));

    return 0; 

}