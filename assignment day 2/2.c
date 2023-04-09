#include <stdio.h>

int main() {
    int arr[] = {2, 1, 1, 2, 1, 2};
    int max1 = arr[0], max2 = arr[1];
    for (int i = 1; i < 6; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    printf("The largest two numbers in the array are %d and %d", max1, max2);
    return 0;
}
