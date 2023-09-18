#include "bubble_sort.h"
#include <string.h>


void bubbleSort(char **array, int n) {

    int i, j;

    for (i = 0; i < n-1; i++) {

        for (j = 0; j < n-i-1; j++) {

            if (strcmp(array[j], array[j+1]) > 0) {
                char *temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}