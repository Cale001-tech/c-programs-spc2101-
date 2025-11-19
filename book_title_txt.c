#include<stdio.h>

int main() {
	FILE *fp;
	char title[19];
	
	fp = fopen("borrowed_linbrary_books.txt" ,"x");
	
	
	printf("Enter the title of the book borrowed at KYU: ");
	fgets(title,sizeof(title),stdin);
	
	fprintf(fp, "%s", title);
	fclose(fp);
	
	printf("THE BOOK TITLE SUCCESSFULLY SAVED!\n");
	return 0;
	
}