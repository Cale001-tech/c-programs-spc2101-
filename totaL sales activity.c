#include<stdio.h>

int main(){
FILE *file;
float amount, total = 0;

file = fopen("sales.txt", "r");

if (file == NULL) {
	printf("Enter total sales.txt\n");
return 1;
	}
	
	while(fscanf(file,  "%f", &amount) !=EOF) {
	   total +=amount;
	}

printf("total sales for a whole day: %2f\n", total);

fclose(file);

return 0;
	
}