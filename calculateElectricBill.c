/*
Name:Caleb_Weru
Regno:CT101/G/26457/25
*/
#include <stdio.h>

float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    float total;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    total = calculateElectricBill(units);

    printf("Total Electric Bill: KSh. %.2f\n", total);

	return 0;
}