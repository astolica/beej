#include <stdio.h> 
#include <stdlib.h> 

void reverse(int *arr, size_t n){
   
    if (n < 2) return; 
    size_t end = n - 1; 
    size_t start = 0; 

    while (start < end) {
        int tmp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = tmp; 

        start++; 
        end--;
    }

}

int main() {
    int my_arr[] = {2, 4, 6, 7 , 10, 12};  // start out with this array 
    int length = sizeof(my_arr) / sizeof(my_arr[0]);
    
    reverse(my_arr, length); // call function above 

    for (int i = 0; i < length; i++){
        printf("%d", my_arr[i]); 
        printf("\n");    
    }
    return 0; 
}