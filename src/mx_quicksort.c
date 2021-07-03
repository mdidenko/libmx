#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    if (!arr)
        return -1;

    int l = left;
    int r = right;
    int mid = (l + r) / 2;
    unsigned int count = 0;

    while (l <= r) {
        while (mx_strlen(arr[l]) < mx_strlen(arr[mid]))
            l++;

        while (mx_strlen(arr[r]) > mx_strlen(arr[mid]))
            r--;

        if (l <= r && mx_strlen(arr[l]) != mx_strlen(arr[r])) {
            char *temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            count++;
        }
        l++;
        r--;
        if (left < r)
            count += mx_quicksort(arr, left, r);

        if (l < right)
            count += mx_quicksort(arr, l, right);
    }
    return count;
}
