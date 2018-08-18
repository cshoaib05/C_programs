#include <stdio.h>
#define MAX 10
typedef struct QUEUE
{
	int data[MAX];
	int front,rear;
}Q;

void insert(Q *q)
{
	int d;
	if(q->front==(q->rear+1)%MAX)
	{
		printf("\nQUEUE IS FULL\n");
	}
	else
	{
		printf("\nENTER THE DATA YOU WANT TO INSERT\n");
		scanf("%d",&d);
		q->rear=(q->rear+1)%MAX;
		q->data[q->rear]=d;
	}
	if(q->front==-1)
	{
		q->front=(q->front+1)%MAX;
	}
	printf("\nrear=%d\tfront=%d\n",q->rear,q->front);
}

void delete(Q *q)
{
	int d;
	if(q->rear==-1 && q->front==-1)
	{
		printf("\nQUEUE IS EMPTY\n");
	}
	else
	{
		d=q->data[q->front];
		q->front=(q->front+1)%MAX;
		printf("\n%d IS DELETED\n",d);
	}
}


void display(Q *q)
{
	int i;
	if(q->front==-1 && q->rear==-1)
	{
		printf("\nQUEUE IS EMPTY\n");
	}
	else
	{
		for(i=q->front;i<=q->rear;i=(i+1)%MAX)
		printf("\t%d\n",q->data[i]);
	}
}

int main()
{
	Q q;
	int a;
	q.rear=-1;
	q.front=-1;
	while(1)
	{
	printf("\nENTER YOUR CHOICE\n");
	printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
					insert(&q);
					break;
		case 2:
					delete(&q);
					break;
		case 3:
					display(&q);
					break;
		case 4:
					return 0;
		default:
					printf("\nINVALID CHOICE\n");
	}
	}

}
