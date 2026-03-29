#include <stdio.h>

void backtrack(char *str, char *res, int index, int resIndex) {
    if (str[index] == '\0'){
        res[resIndex] = '\0';
        printf("%s", res);
        return;
    }
    

}