#include <stdio.h>

void main()
{
	int marks=0;
	printf("enter the numbers\n");
	scanf("%d",&marks);

	if (marks>=85)
	{
		printf("first class\n");
	}
	else if (marks>=60)
	{
		printf("second class\n");
	}
	else if (marks>=35)
	{
		printf("third class\n");
	}
	else if(marks<35)
	{
		printf("fail\n");
	}
}