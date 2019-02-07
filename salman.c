#include <stdio.h>
void main()
{
	int a,b,c,i;
	printf("prime no or not:");
	scanf("%d",&a);

	for ( i = 2; i <= a; ++i)
	{
		if (a%i==0)
		{
			printf("%d is not a prime number\n",i);
		}
		else 
		{
			printf("%d is a prime number\n",i);
		}
	}
}