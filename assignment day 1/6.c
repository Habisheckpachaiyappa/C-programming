#include <stdio.h>

int main() {
    int amount, notes500, notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes500 = amount / 500;
    amount = amount % 500;

    notes100 = amount / 100;
    amount = amount % 100;

    notes50 = amount / 50;
    amount = amount % 50;

    notes20 = amount / 20;
    amount = amount % 20;

    notes10 = amount / 10;
    amount = amount % 10;

    notes5 = amount / 5;
    amount = amount % 5;

    notes2 = amount / 2;
    amount = amount % 2;

    notes1 = amount;

    printf("Minimum number of notes required:\n");
    printf("Rs. 500: %d\n", notes500);
    printf("Rs. 100: %d\n", notes100);
    printf("Rs. 50: %d\n", notes50);
    printf("Rs. 20: %d\n", notes20);
    printf("Rs. 10: %d\n", notes10);
    printf("Rs. 5: %d\n", notes5);
    printf("Rs. 2: %d\n", notes2);
    printf("Rs. 1: %d\n", notes1);

    return 0;
}
