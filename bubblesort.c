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

void bubbleSort(int arr[], int n) {

    //outer loop for passes
    for (int i= 0; i < n-1; i++) {
        //inner loop for comparing neighbouring elements
        for ( int j = 0; j < n-i-1; j++) {
            
            //if left element is bigger than right element, swap them
            if (arr[j] > arr[j+1]) {
                int *a, *b; //pointers to elements to be swapped
                a = &arr[j];     //pointer a points to current element
                b = &arr[j+1];   //pointer b points to next element
                
                int temp = *a; //saves a in temp
                *a = *b;       //copies b to a
                *b = temp;     //copies temp(old a) to b
            }
        }
    }
}

int main() {
 
    int arr[] = {5, 3, 8, 1, 4};
    int n = 5;         //number of elements in array

    printf("Before sorting: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("After sorting: ");
    printArray(arr, n);

    return 0;
}