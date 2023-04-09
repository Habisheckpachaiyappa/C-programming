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

    int even[N], odd[N]; 
    int even_count = 0, odd_count = 0; 

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count] = arr[i];
            even_count++;
        }
        else {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }

    printf("The even elements are: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\nThe odd elements are: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
