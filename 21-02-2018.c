/****** oiii this is _____'s c-code, do not copyright this *****/
#include<stdio.h>

int main()
{
	int exit = 1;
	do{
		int answer;
		printf("Enter a number and I'll check if it is even or odd \n'");
		scanf("%d", &answer);
		
		if( answer % 2 == 0 )
		{
			printf("The number you entered: %d is even\n", answer);
		}
		else
		{
			printf("The number you entered: %d is odd", answer);
		}
		printf("\n enter '1' to try again or 0 to exit\n");
		scanf("%d", &exit);
	}
	while(exit != 0);
}
