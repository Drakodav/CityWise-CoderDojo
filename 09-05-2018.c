#include<stdio.h>

int main()
{
    int high = 10000;
    int low = 0;
    int guess = 1;
    int myguess;
    char reply;

    printf("Think of a number between 0 and %d\n", high);

    while (high > low)
    {
        /* make a guess */
		myguess = (high + low) / 2;
        printf("Guess #%d: Is your number higher than %d?  ", guess++, myguess);

	/* get your response */
        scanf(" %c", &reply);

        if (reply == 'y')
	    {
			low = myguess;
			myguess++;
		}
		else
	    {
			high = myguess;
		}
	}
    
    printf("Your number is %d!\n", myguess);
}
