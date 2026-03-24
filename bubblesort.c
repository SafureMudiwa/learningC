//compares 2 neighbouring elements
//if order is wrong thier swapped
//repeats until array is sorted

#include <stdio.h>

//functionfor printing array
void printArray(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {  //iterates through array reading each elements
        printf("%d", arr[i]);
    }
    printf("\n");
}



int main() {
 
    int arr[] = {5, 3, 8, 1, 4};
    int n = 5;         //number of elements in array

    printf("Before sorting: ");
    printArray(arr, n);

    return 0;
}