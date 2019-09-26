#include<stdio.h> 

#define CONVERSIONRATE 0.81

//prototype
void converttoeuros();

int main()
{
	
	converttoeuros();
	
	return 0; 
}//end main

void converttoeuros()
{
	int i;				//index variable
	float euro;					
	float dollar[5];	//array where dollars will be stored
	
	printf("Enter in 5 dollar values to be converted : ");
	for( i=0; i<5; i++)
	{
		scanf("%f", &dollar[i] );
	}//end for 
	
	printf("\n\nHere are your dollars converted to euros \n\n");
	
	for( i=0; i<5; i++)
	{
		euro = dollar[i] * CONVERSIONRATE;
		printf(" %.2f ", euro);
	}//end for
	
	
}
