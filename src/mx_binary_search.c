#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int mid = 0, start = 0, end = size - 1;

    mx_bubble_sort(arr, size);

    while (1) {
        mid = (start + end) / 2;
        if (mx_strcmp(arr[mid], s) > 0) {
            *count += 1;
            end = mid - 1;
        }
        else if (mx_strcmp(arr[mid], s) < 0) {
            *count += 1;
            start = mid + 1;
        }
        else if (mx_strcmp(arr[mid], s) == 0) {
            *count += 1;
            return mid;
        }

        if (start > end) {
            *count = 0;
            return -1;
        }
    }
}
