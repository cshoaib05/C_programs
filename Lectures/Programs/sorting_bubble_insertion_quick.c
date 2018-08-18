#include<stdio.h>
#include<stdlib.h>


void bubble(int *a,int n)
{
int i,j,k,tmp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
tmp=a[j];
a[j]=a[j+1];
a[j+1]=tmp;
}
}
}
}


void insertsort(int *a,int n)
{
int i,j,k,tmp;
for(i=1;i<n;i++)
{
	tmp=a[i];
	for(j=0;j<i;j++)
	{
		if(a[j]>a[i])
		{
			for(k=i;k>j;k--)
			{
				a[k]=a[k-1];
			}
				a[k]=tmp;
		break;
		}
	}
}
}


int partition(int a[],int low,int high)
{
int pivot,i,j,k;
pivot=a[low];
i=low;
j=high;
while(i<j)
{
while(a[i]<=pivot && i<high)
i++;
while(a[j]>pivot && j>low)
j--;
if(i<j)
{
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
a[low]=a[j];
a[j]=pivot;
return j;
}


void quicksort(int a[],int low,int high)
{
int p;
if(low<high)
{
p=partition(a,low,high);
quicksort(a,low,p-1);
quicksort(a,p+1,high);
}
}




int main()
{
int a[20],n,i;
printf("\nEnter Total no. of elements :: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter Element :: ");
scanf("%d",&a[i]);
}
//insertsort(a,n);
bubble(a,n);
//quicksort(a,0,n-1);
printf("\n\tSorted List...\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
