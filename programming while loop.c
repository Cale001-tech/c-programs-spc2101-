#include <stdio.h>

int main() {
    float balance, withdraw;

    // Ask user for initial balance
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;

        printf("Remaining balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("\nInsufficient funds. Transaction stopped.\n");
        }
    }

    return 0;
}

