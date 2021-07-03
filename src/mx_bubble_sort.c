#include "../inc/libmx.h"

int mx_bubble_sort(char **arr, int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i; j > 0; j--) {
            if (mx_strcmp(arr[j - 1], arr[j]) > 0) {
                char *temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }

    return count;
}
