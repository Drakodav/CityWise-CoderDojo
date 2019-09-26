#include<stdio.h>

int main()
{
	float fahr=0;
	float cels=0;
	int i;
	float temp=0;
	
	printf("Enter a Fahrenheit temperature to convert to degrees\n");
	scanf("%f",&fahr);
	temp = (fahr-32) * 5/9 ;		//F = C - 32) × 5/9
	printf("\n%.2f in Fahrenheit is : %.2f Celsius", fahr, temp);
	
	
	printf("\n\nEnter a Celsius temperature to convert to Fahrenheit\n");
	scanf("%f",&cels);
	temp = 	(cels*9/5) + 32 ;			//F = C × 9/5 + 32
	printf("\n%.2f in Celsius is : %.2f Fahrenheit", cels, temp);
	
}
