/*
Name:Caleb_Weru
Reg No:CT101/G/26457/25
Description:programing_to_compute_water_bill
*/
#include <stdio.h>

int main() {
    double units;
    double bill = 0.0;

    printf("Enter water units consumed: ");
    if (scanf("%lf", &units) != 1 && units < 0){
		return 1;
	}

    if (units <= 30.0) {
        bill = units * 20.0;
    } else if (units <= 60.0) {
        bill = 30.0 * 20.0 + (units - 30.0) * 25.0;
    } else {
        bill = 30.0 * 20.0 + 30.0 * 25.0 + (units - 60.0) * 30.0;
    }

    printf("Total water bill: %.2f KES", bill);
    
    return 0;
}