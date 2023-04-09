#include <stdio.h>

int minJumps(int arr[], int N) {
    if (N <= 1) {
        return 0;
    }
    if (arr[0] == 0) {
        return -1;
    }
    int jumps = 1, maxReach = arr[0], steps = arr[0];
    for (int i = 1; i < N; i++) {
        if (i == N-1) {
            return jumps;
        }
        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];
        steps--;
        if (steps == 0) {
            jumps++;
            if (i >= maxReach) {
                return -1;
            }
            steps = maxReach - i;
        }
    }
    return -1;
}

int main() {
    int N;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int result = minJumps(arr, N);

    if (result == -1) {
        printf("It is not possible to reach the end of the array.\n");
    } else {
        printf("The minimum number of jumps to reach the end of the array is %d.\n", result);
    }

    return 0;
}
