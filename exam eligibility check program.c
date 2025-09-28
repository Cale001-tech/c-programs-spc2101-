/*
Name:Caleb_Weru
Reg_no:CT101/G/26457/25
Description:decision making in C
*/
#include <stdio.h>

int main() {
    float attendance;
    float average_marks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    if (attendance >= 75.0 && average_marks >= 40.0) { printf("Eligible");
    } else {
        printf("Not eligible.");
    }

    return 0;
}