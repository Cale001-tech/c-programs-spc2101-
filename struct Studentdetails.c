#include <stdio.h>

// A simple structure to store student information
struct Student {
    char name[50];
    char regNo[20];
    int marks;
};

int main() {
    FILE *fp;
    struct Student s;

    // Open the binary file that holds the results
    fp = fopen("results.dat", "rb");

    if (fp == NULL) {
        printf("Sorry, I couldn't find or open results.dat.\n");
        return 1;
    }

    printf("Here are the students and their marks:\n\n");

    // Read each student record until the end
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Student: %s\n", s.name);
        printf("Marks  : %d\n\n", s.marks);
    }

    fclose(fp);

    printf("All records have been displayed successfully.\n");

    return 0;
}