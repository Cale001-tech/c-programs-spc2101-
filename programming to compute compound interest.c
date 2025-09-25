/*
Name:Caleb Weru
Reg no.: CT101/G/26457/25
Description: Program to compute Compound Interest
*/
#include <stdio.h>//printf,scanf
#include <math.h>//enables mathematical expressions
int main()//main function
{
	float principle, rate, time, numberofcompoundingyears, amount; 
	printf("Enter principle amount: ");// prompts user to input principle
	scanf("%f", &principle);
	
	printf("Enter interest rate: ");//prompts user to input the interest rate
	scanf("%f", &rate);
	
	printf("Enter the total number of years: ");//prompts the user to input the number of years
	scanf("%f", &time);
	
	printf("Enter the number of compounding years: ");//prompts user to input the number of compounding years
	scanf("%f", &numberofcompoundingyears);
	
	//the formula to compute compound interest
	amount=principle*pow((1+rate/numberofcompoundingyears),numberofcompoundingyears*time);
	// user sees the outcome
	printf("\n Final amount including interest is %f", amount);
	// excecution successful
	return 0;
}