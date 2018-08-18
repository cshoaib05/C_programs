#include<stdio.h>
#define MAX 10
typedef struct Stack
{
	int data[MAX];
	int top;
}STK;


void display(STK *s)
{
	int i;
	if(s->top==-1)
	{
		printf("\nSTACK IS EMPTY\n");
	}
	else
	{
		for(i=0;i!=s->top+1;i++)
		{
		printf("\t%d\n",s->data[i]);
		}
	}
}

void pop(STK *s)
{
	int d;
	if(s->top==-1)
	{
		printf("\nSTACK IS EMPTY\n");
	}
	else
	{
		d=s->data[s->top];
		s->top--;
		printf("\n%d IS DELETED\n",d);
	}
}


void push(STK *s)
{
	int d;
	printf("\nENTER THE NUMBER YOU WANT TO INSERT\n");
	scanf("%d",&d);
	if(s->top==MAX-1)
	{
		printf("STACK IS FULL\n");
		return;
	}
	else
	{
		s->top++;
		s->data[s->top]=d;
	}
	printf("INSERTION SUCCESSFULL\n");
}


int main()
{
	STK s;
	int a;
	s.top=-1;
	while(1)
	{
	printf("\nENTER YOUR CHOICE\n");
	printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
					push(&s);
					break;
		case 2:
					pop(&s);
					break;
		case 3:
					display(&s);
					break;
		case 4:
					return 0;
		default:
					printf("\nINVALID OPTION");
	}
	}
}
