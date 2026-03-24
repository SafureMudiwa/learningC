#include <stdio.h>

int linearSearch(int array[], int target) {

    int i = 0;
    while (array[i] != -1) {
        if (array[i] == target) {
            return i;   //target found, return index
        }
        i++;
    }
    return -1;  //target not found, return -1
}

int main() {
    //array must end with -1
    int array[] = {5, 3, 8, 1, 4, -1};
    int target = 8;

    int result = linearSearch(array, target);

    if (result != -1) {
        printf("Found %d at idnex %d\n", target, result);
    } else {
        printf("%d, not found in array\n", target);
    }
    return 0;
}