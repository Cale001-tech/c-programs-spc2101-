/*
Name:Caleb_Weru
Reg_No:CT101/G/26457/25
Description:bundles_computation
*/
#include <stdio.h>

int main() {
    int choice;

    printf("Local Mobile Service Provider - Internet Data Bundles");
    printf("Option\tBundle\tCost (KES)");
    
    printf("1\t100 MB\t50");
    
    printf("2\t500 MB\t200");
    
    printf("3\t1 GB\t350");
    
    printf("4\t2 GB\t600");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
printf("You selected: 100 MB bundle.Cost: KES 50");
            break;
        case 2:
            printf("You selected: 500 MB bundle.Cost: KES 200");
            break;
        case 3:
            printf("You selected: 1 GB bundle.Cost: KES 350");
            break;
        case 4:
            printf("You selected: 2 GB bundle.Cost: KES 600");
            break;
        default:
            printf("Invalid choice! Please select an option between 1 and 4."); }

    return 0;
}