#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main() 
{
	int i, j;
	int x = 5;
	int y = 10;
	char input;
	int isFire = 0;
	int ny = 5;
	int nx = 0;
	int isKilled = 0;
	int score = 0;

	while(1)
	{
		system("clear");

		for (i=0; i<nx; i++)
			printf("\n");
		x = 5 - nx;
		nx++;
		if(nx > 6){
			nx = 0;
			ny = rand()%20;
			x = 5;
			if (ny == y){
				printf("game over."); 
				break;
			}
		}

		for (j=0; j<ny; j++ )
			printf(" ");
		printf("+\n");

		if (isFire == 1)
		{
			for(i=0; i<x; i++)	
			{
				for(j=0; j<y; j++)
					printf(" ");
				printf("  |\n");
			}	
			isFire = 0;
			if(y+2 == ny){
				score++;
				nx = 0;
				x = 5;
//				isKilled = 1;
				ny = rand()%20;
			}
		} else {
			for(i=0; i<x; i++) 
				printf("\n");
		}	
		for(j=0; j<y; j++) 
			printf(" ");
		printf("  *\n");
		for(j=0; j<y; j++) 
			printf(" ");
		printf("*****\n");
		for(j=0; j<y; j++) 
			printf(" ");
		printf(" * * \n");
		printf("\n-------------------------------------------------\nScore:%d \n", score);

		scanf("%c", &input);
		if (input == 'a')
			y--;
		if (input == 'd')
			y++;
		if (input == 'w')
			x--;
		if (input == 's')
			x++;
		if (input == 'f')
			isFire = 1;
		if (input == 'q')
			exit(0);
	}
}

