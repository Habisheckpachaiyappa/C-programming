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
    int freq[N];
    for (int i = 0; i < N; i++) {
        freq[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        int count = 1;
        for (int j = i+1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = -1; 
            }
        }
        if (freq[i] != -1) {
            freq[i] = count;
        }
    }

    printf("The frequency of each element is: \n");
    for (int i = 0; i < N; i++) {
        if (freq[i] != -1) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
