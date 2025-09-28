/*
Name:Caleb_Weru
Reg_No:CT101/G/26457/25
Description:programming to prompt entry of personal details
*/
#include <stdio.h>
#include <string.h>

int main() {
    float height;
    double bank_balance;
    char phone_number[20];  // Assuming max 19 digits + null terminator
    
    printf("Personal Information Collector:");
    
    // Prompt for height
    printf("Enter your height (in meters or centimeters): ");
    scanf("%f", &height);
    
    // Prompt for bank balance
    printf("Enter your bank balance (in Kenya shillings): ");
    scanf("%lf", &bank_balance);
    
    // Prompt for phone number
    printf("Enter your phone number: ");
    scanf("%s" , &phone_number);

    // Display collected information in formatted manner
    printf("YOUR INFORMATION");
    printf("Height: %.2f %s", 
           height:? "meters" :\n");
    printf("Bank Balance: KES %.2f", bank_balance);
    printf("Phone Number: %s", phone_number);
    
    return 0;
}