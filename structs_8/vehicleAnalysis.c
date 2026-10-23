#include <stdio.h> 

#define MAX_MAKE_LEN 40  
#define MAX_MODEL_LEN  32 
typedef struct car{
    char make[MAX_MAKE_LEN + 1]; 
    char model[MAX_MODEL_LEN + 1];  
    int year; 
    long miles; 
}car; 

    car car1 = {}; // create an empty variable from the car struct named car1 

    car *car_ptr = &car1; // create a pointer to that struct named ptr 

int main() {
    printf("Welcome, this program is to analyze your car and store it.\n");

    printf("Please enter your car's make\n");
    scanf("%s", &car_ptr->make);

    // i'll do ts later 
    printf("Please enter your car's model\n"); 
    scanf("%s", &car_ptr->model);

    printf("Please enter the year your car was made\n");
    scanf("%d", &car_ptr->year);

    printf("Please enter the number of miles your car has!\n");
    scanf("%ld", &car_ptr->miles);

    printf("Your car's make is %s, and the model is %s. The year it was made wa sin %d, and it has %ld miles",
    car1.make, car1.model, car1.year, car1.miles);

 
    return 0; 


}