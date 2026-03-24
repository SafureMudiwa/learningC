#include <stdio.h>

int linearSearch(int array[], int n, int target) {

    //going through array element by element
    for (int i=0; i < n; i++) {
        if (array[i] == target) {
            return i;    //index of target element in array
        }
    }
    return -1; //target not found
}

int main() {
    int array[] = {5, 3, 8, 1, 4};
    int n = 5;
    int target = 8;

    int result = linearSearch(array, n, target);

    if (result != -1) {
        printf("Found %d at idnex %d\n", target, result);
    } else {
        printf("%d, not found in array\n", target);
    }
    return 0;
}