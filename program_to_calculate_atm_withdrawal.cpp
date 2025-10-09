/*
Name:Caleb_Weru
Reg_No:CT101/G/26457/25
*/
#include <stdio.h>

int main() {
    float balance = 1000.0;
    float withdrawal;

    printf("Welcome to the Caleb's ATM \n");
    printf("Current balance: KES %.2f \n", balance);

    while (balance > 0) {
        printf("Enter withdrawal amount: KES ");
        scanf("%f", &withdrawal);

        if (withdrawal <= 0) {
            printf("Invalid amount! Please enter a positive value.");
            continue;
        }

        if (withdrawal > balance) {
            printf("Insufficient funds! Your balance is KES %.2f", balance);
			            continue; 
        }

        balance -= withdrawal;
        printf("Withdrawal successful! Remaining balance: KES %.2f", balance);
    }

    printf("Insufficient funds. Transaction declined. Final balance: KES %.2f", balance);
    return 0;
}