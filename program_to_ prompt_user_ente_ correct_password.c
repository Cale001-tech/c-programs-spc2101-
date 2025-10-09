/*
Name:Caleb_Weru
Reg_no:CT101/G/26457/25
Description:whie_loop
*/
#include <stdio.h>
#include <string.h>

#define CORRECT_PASSWORD "4444"

int main() {
    char prompt_user_to_Input[20];

    printf("Password Login System \n");

    do {
        printf("Enter the password: ");
        scanf("%s", prompt_user_to_Input);

        if (strcmp(prompt_user_to_Input, CORRECT_PASSWORD) != 0) {
            printf("Incorrect password. Try again.");
        }
    } while (strcmp(prompt_user_to_Input, CORRECT_PASSWORD) != 0);

    printf("Access Granted!");
    return 0;
}