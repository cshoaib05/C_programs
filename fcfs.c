#include<stdio.h>

void main() 
{
	int i,nop, arrival[100], burst[100],tat[100],waiting_time;
	


	printf("\nEnter the number of process:");
	scanf("%d",&nop);


	for(i=0;i<nop;i++)
	{
		printf("\nEnter the Burst time of %d :",i);
		scanf("%d",&burst[i]);
	}

	printf("\n PID \t\t Burst Time \t\t Waiting Time \t\t TAT ");

	waiting_time = 0;

	for(i=0;i<nop;i++)
	{
		tat[i] = waiting_time+burst[i];

		printf("\n\n %d \t\t   %d \t\t   %d \t\t\t %d \t\t ",i+1,burst[i],waiting_time,tat[i]);	
		waiting_time +=burst[i];
	}


}
