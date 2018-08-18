0#include <stdio.h>
int main()
{	int i=0,j;
	char temp;
	char a[30];
	gets(a);
	while(a[i]!='\0')
	{
	if(a[i]==' ')
	{	j=i;
		while(a[j]!='\0')
		{
			a[j]=a[j+1];
			j++;
		}
	}
	i++;
	}
	puts(a);
	return 0;
}
