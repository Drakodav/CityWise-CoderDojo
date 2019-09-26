#include<stdio.h>
int main()
{
	int num1, num2, num3;
	printf("Welcome to Coderdojo"); 
	printf("\n Enter a number: ");
	scanf("%d", &num1);
	printf("\n The number you entered is : %d", num1);
	
	printf("\n Enter a number: ");
	scanf("%d", &num2);
	printf("\n The number you entered is : %d", num2);
	
	printf("\n Enter a number: ");
	scanf("%d", &num3);
	printf("\n The number you entered is : %d", num3);
	
	int sum ;
	sum= num1+num2+num3;
	printf(" \n  %d	",	sum);
	
	return 123;
}
