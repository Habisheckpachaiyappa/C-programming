#include <stdio.h>

int main() {
    int N; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N]; 
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < N-1; k++) {
                    arr[k] = arr[k+1];
                }
                N--; 
                j--; 
        }
    }

    printf("The array with duplicates removed is: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
