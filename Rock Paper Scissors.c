#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i;
	int R = 1;
	int P = 2;
	int S = 3;
	int Pscore = 0;
	int Cscore = 0;
	int choice;
	srand(time(NULL));
	
	printf("Welcome to my Rock Paper Scissors game!!!\n");
	printf("\nRock=1 Paper=2 Scissors=3 \n");
	
	for( i=0; i<10; i++ )
	{
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		int com = rand()%3 + 1;
		
		if(choice == 1) //Rock
		{
			if(com == 1) //Rock
			{
				printf("\nDraw");	
			}
			if(com == 2) //Paper
			{
				printf("\nPaper Beats Rock : Computer Wins");
				Cscore++;
			}
			if(com == 3) //Scissors
			{
				printf("\nScissors Beats Rock : You Win");
				Pscore++;
			}
		}
		else if(choice == 2) //Paper
		{
			if(com == 1) //Rock
			{
				printf("\nPaper Beats Rock : You Win");
				Pscore++;	
			}
			if(com == 2) //Paper
			{
				printf("\nDraw");
			}
			if(com == 3) //Scissors
			{
				printf("\nRock Beats Scissors : Computer Wins");
				Cscore++;
			}
		}
		else if(choice == 3) //Scissors
		{
			if(com == 1) //Rock
			{
				printf("\nRock Beats Scissors : Computer Wins");
				Cscore++;	
			}
			if(com == 2) //Paper
			{
				printf("\nScissors Beats Paper : You Win");
				Pscore++;
			}
			if(com == 3) //Scissors
			{
				printf("\nDraw");
			}
		}
		else
		{
			printf("\nWrong Answer!!!");
		}
			
	}
	
	printf("\n\nCom score : %d", Cscore);
	printf("\nPlayer score : %d", Pscore);
	printf("\n\nThanks for playing, see you soon!");
	
}

