#include<stdio.h>
void main()
{
	int A[5];
	int i=0,j=0,a,k=0;
	printf("ENTER THE ARRAY\n");
	for(a=0;a<5;a++)
	{
		scanf("%d",&A[a]);
	}
		while(i<5)
		{
			while(j<5)
			{
				if(A[i]==A[j])
				{
					k++;
					if(k==2)
					{
						printf("THE ANSWER IS :%d",A[i]);
						return;
					}
				}
				j++;	
			}
			i++;
		}
}
