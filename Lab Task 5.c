#include<stdio.h>

main(){
	int principal;
	float rate;
	printf("please Enter the Principle/Deposit: ");
	scanf("%d", &principal);
	printf("please Enter annual rate(Annual rate should be between 1-100) : ");
	scanf("%f", &rate);
	
	 rate = rate/100;
	 int interest = principal*rate;
	 printf("This is annual interest : %d", interest);
	 
	 int totalAmount = principal + interest;
	 printf("\nThis is the total amount over the year: %d", totalAmount);
	 
}
