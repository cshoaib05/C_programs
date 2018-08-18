#include<stdio.h>

int candies(int n, int m) 
{
  int a=0,i=0,temp;
while(a<m)
{	temp=a;
    a=n*i;
    printf("%d\n",a);
    i++;
}
return temp;
}

void main()
{int a;
	a=candies(3,10);
	printf("%d\n",a);
}
