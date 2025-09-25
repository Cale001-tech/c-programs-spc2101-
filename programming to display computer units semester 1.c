/*
    Name:Caleb Weru
Reg no:26457
    */
#include <stdio.h>

int main() {
    // Semester 1 Computer Science Units
    char *units[] = {
    "1. Introduction to Computer Science",
    "2. Computer Organization and Architecture",
    "3. Introduction to Programming in C",
    "4. Discrete Mathematics",
    "5. Communication Skills",
    "6. Fundamentals of Information Systems",
    "7.mathematics for science",
    "8.physics",
    };
    
    int n = sizeof(units) / sizeof(units[0]);  // Number of units

    printf("=== Computer Science Semester 1 Units ===\n\n");

    for (int i = 0; i < n; i++) {
        printf("%s\n", units[i]);
    }

    return 0;
}

