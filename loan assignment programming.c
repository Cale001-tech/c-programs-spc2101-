/*
name:Calebweru
reg no:26457
description:program to determine whether you get a loan or not
*/
#include<stdio.h>
int main() {
	int age, income;
	printf("enter users age: \n");
	scanf("%d" , &age);
	printf("enter users annual income: \n");
	scanf("%d" , &income);
	if(age>=20 && income>=18000) { 
		printf("congratulations you qualify for a loan. \n");
	} else {
		printf("unfortunately we are unable to offer you a loan at this time, \n");
	}
	return 0;
	}