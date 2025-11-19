#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    // Open the file in APPEND mode so old data is not deleted
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter the title of the borrowed book: ");
        fflush(stdin);  // Clear input buffer (Windows)
        fgets(title, sizeof(title), stdin);

        // Write the title to the file
        fputs(title, file);

        printf("Book title saved successfully!\n");

        printf("Do you want to enter another book? (y/n): ");
        scanf(" %c", &choice);
        getchar();  // consume newline after char input

    } while (choice == 'y' || choice == 'Y');

    fclose(file);

    printf("\nAll book titles have been stored in borrowed_books.txt\n");

    return 0;
}