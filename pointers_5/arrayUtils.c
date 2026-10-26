#include <stdio.h> 
#include <stdlib.h> 

void reverse(int *arr, size_t n){ // params are a pointer (or an array), and the size of that array 
   
    if (n < 2) return; // if the size is less than 2 then we return 
    size_t end = n - 1; // the end of the array is the size of it - 1.
    size_t start = 0; // start is 0 

    while (start < end) { 
        
        int tmp = arr[start]; // store array subscript "start" in a temporary array

        /* for example, at the start 2 will be stored*/
        arr[start] = arr[end]; // then we take the element at the tail end of the array and replace it with the "start" element
        /* So, for example, 12 would go over to the index that 2 was at */

        arr[end] = tmp; // we then take the earlier stored value in tmp and replace it with whatever value is stored in "end" 

        /* so in this case the element 12 at the end would become 2!*/

        start++; // move to the next element to sort 
        end--; // move the tail end down the array 
        /* The process is repeated until start > end */
    }

}

int main() {
    int my_arr[] = {2, 4, 6, 7 , 10, 12};  // start out with this array 
    int length = sizeof(my_arr) / sizeof(my_arr[0]); // divide the size of the array by the size of 1 element in that array to get the length 
    
    reverse(my_arr, length); // call function above 

    for (int i = 0; i < length; i++){ // loops through the changed array to print the values 
        printf("%d", my_arr[i]); 
        printf("\n");    
    }
    return 0; 
}