#include <stdio.h>

int main() {
    int decimal_num, binary_num[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    while (decimal_num > 0) {
        binary_num[i] = decimal_num % 2;
        decimal_num /= 2;
        i++;
    }

    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary_num[j]);

    return 0;
}
