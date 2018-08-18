Write a function that deals two five-card poker hands, evaluates each, and determines which is the better hand. Using pass by pointer technique, the function should provide the following information to main:
The two hands
Status of each hand (i.e. contains a pair or two pairs, …)
Determination of which hand is the better hand

#include <stdio.h>

int isRoyalFLush(char First_hand[],char Second_hand[])
{
	if (First_hand[1]==Fir
	st_hand[3] && First_hand[1]==First_hand[5] && First_hand[1]==First_hand[7] && First_hand[1]==First_hand[9])
		{
			
		}
		else
		{
			return 0;
		}
}

void main()
{
	int i;
	char First_hand[10],Second_hand[10]; 

	printf("ENTER THE 1st HANDS\n Input should (The Value of card,color of card) ");//H-heart  S-Spade D-Diamond C-Club 
	gets(First_hand);
	printf("ENTER THE 1st HANDS\n Input should (The Value of card,color of card) ");//H-heart  S-Spade D-Diamond C-Club 
	gets(Second_hand);
	for (i = 0; i < 10; i=i+2)
	{
		printf("%c%c\n",First_hand[i],First_hand[i+1]);
	}
		for (i = 0; i < 10; i=i+2)
	{
		printf("%c%c\n",First_hand[i],First_hand[i+1]);
	}
	isRoyalFLush(First_hand,Second_hand);
}



