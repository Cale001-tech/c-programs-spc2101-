/*
Name:Caleb_Weru
Regno:CT101/G/26457/25
*/
#include <stdio.h>

float calculateFare(float distance) {
    float rate = 50;
    float totalFare = distance * rate;
    return totalFare;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    float fare = calculateFare(distance);
    printf("Total Fare: KSh. %.2f\n", fare);

    return 0;
}
    