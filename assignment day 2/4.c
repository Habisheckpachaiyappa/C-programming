#include <stdio.h>
#include <limits.h>

int main() {
    int N; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max_diff = INT_MIN; 
    int min_element = arr[0]; 

    for (int i = 1; i < N; i++) {
        int diff = arr[i] - min_element;
        if (diff > max_diff) {
            max_diff = diff;
        }
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
    }

    printf("The maximum difference between two elements in the array is %d", max_diff);

    return 0;
}
