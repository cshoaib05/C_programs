#include <stdio.h>
#include <stdlib.h>
struct SLL
{
	int data;
	struct SLL *next;
};

struct SLL *insertAtEnd(struct SLL *h)
{
	struct SLL *temp,*p;
	int d;
	printf("INSERT THE DATA:\t");
	scanf("%d",&d);
	p=(struct SLL *)malloc(sizeof(struct SLL));
	if (p==NULL)
	{
		printf("NOT ENOUGH MEMORY");
		return h;
	}
	p->data=d;
	p->next=NULL;
	temp=h;
	if (temp==NULL)
	{
		h=p;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=p;
	}
	printf("INSERTION SUCCESSFUL\n");
return h;
}

void display(struct SLL *h)
{
	struct SLL *temp;
	temp=h;
	if(temp==NULL)
	{
		printf("EMPTY LINK LIST\n");
		return h;
	}
	else
	{
		while(temp!=NULL)
		{
			printf("\n\t%d\n",temp->data);
			temp=temp->next;
		}
	}
}

struct SLL *insertAtBegin(struct SLL *h)
{
	struct SLL *p,*temp;
	int d;
	printf("\nENTER THE DATA:\t");
	scanf("%d",&d);
	p=(struct SLL *)malloc(sizeof(struct SLL));
	if(p==NULL)
	{
		printf("NOT ENOUGH MEMORY");
		return h;
	}
	p->data=d;
	p->next=NULL;
	temp=h;
	if(temp==NULL)
	{
		h=p;
	}
	else
	{
		p->next=temp;
		h=p;
	}
	return h;
}


struct SLL *insertAfter(struct SLL *h)
{
	struct SLL *temp,*p;
	int d,key;
	printf("ENTER THE DATA:\t");
	scanf("%d",&d);
	p=(struct SLL *)malloc(sizeof(struct SLL));
	if(p==NULL)
	{
		printf("NOT ENOUGH MEMORY");
		return h;
	}
	p->data=d;
	p->next=NULL;
	printf("\nENTER THE KEY:\t");
	scanf("%d",&key);
	temp=h;
	if(temp==NULL)
	{
		printf("EMPTY LINK LIST\n");
	}
	while(temp->next!=NULL)
	{	
		if(temp->data!=key)
		{
			temp=temp->next;
		}
		else
		{
			break;
		}
	}
	if(temp->data!=key)
	{
	  printf("\n\tKEY NOT FOUND\n");
	}
	else
	{
		p->next=temp->next;
	  	temp->next=p;
	}
	return h;
}

struct SLL *insertBefore(struct SLL *h)
{
	struct SLL *temp,*p;
	int d,key;
	printf("\nENTER THE DATA:\t");
	scanf("%d",&d);
	p=(struct SLL *)malloc(sizeof(struct SLL));
	if(p==NULL)
	{
		printf("NOT ENOUGH MEMORY");
		return h;
	}
	p->data=d;
	p->next=NULL;
	printf("\n\tENTER THE KEY:\t");
	scanf("%d",&key);
	temp=h;
	if(temp==NULL)
	{
		printf("EMPTY LINK LIST\n");
	}
	while(temp->next!=NULL)
	{	
		if(temp->next->data!=key)
		{
			temp=temp->next;
		}
		else
		{
			break;
		}
	}
	if(temp->next->data!=key)
	{
		printf("\nKEY NOT FOUND\n");
	}
	else
	{
		p->next=temp->next;
		temp->next=p;
	}
return h;
}


struct SLL *removeEnd(struct SLL *h)
{
	struct SLL *temp,*prev;
	temp=h;
	if(temp==NULL)
	{
		printf("EMPTY LINK LIST\n");
		return h;
	}
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp->next==NULL)
	{
		prev->next=NULL;
		free(temp);
	}
return h;
}

struct SLL *removeBegin(struct SLL *h)
{
	struct SLL *temp,*prev;
	temp=h;
	if(temp==NULL)
	{
		printf("EMPTY LINK LIST\n");
		return h;
	}
	h=temp->next;
	free(temp);
return h;
}

struct SLL *removeData(struct SLL *h)
{
	int key;
	struct SLL *temp,*prev;
	prev=NULL;
	temp=h;
	if(temp==NULL)
	{	
		printf("EMPTY LINK LIST\n");
		return h;
	}
		printf("\n\tENTER THE DATA TO BE DELETED:\t");
		scanf("%d",&key);
		while(temp->data!=key)
		{
			prev=temp;
			temp=temp->next;
		}
		if(prev==NULL)
		{
			h=temp->next;
			free(temp);
		}
		else
			{
				if (temp->data==key)
				{
					prev->next=temp->next;
					free(temp);
				}
				else
				{
					printf("\nDATA NOT FOUND\n");
				}
			}
	return h;
}

void main()
{
	struct SLL *s;
	s=NULL;
	int d,a;
	while(1)
	{
	printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
	printf("\tENTER YOUR CHOICE:\t");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
					printf("\n1.INSERT AT END\n 2.INSERT AT BEGINING\n3.INSERT AFTER\n4.INSERT BEFORE\n");
					printf("\tENTER CHOICE:\t");
					scanf("%d",&a);
					if(a==1)
					{
					s=insertAtEnd(s);
					}
					else
					{
						if(a==2)
						{
						s=insertAtBegin(s);
						}
						else
						{
							if (a==3)
							{
								s=insertAfter(s);
							}
							else
							{
								if (a==4)
								{
									s=insertBefore(s);	
								}
								else
								{
									printf("\nINVALID OPTION\n");
								}
							}
						}
					}
					break;
		case 2:
					printf("\n1.REMOVE END\n 2.REMOVE BEGINING\n3.REMOVE A DATA\n");
					printf("\tENTER CHOICE:\t");
					scanf("%d",&a);
					if(a==1)
					{
					  s=removeEnd(s);
					}
					else
					{
						if(a==2)
						{
						  s=removeBegin(s);
						}
						else
						{
							if (a==3)
							{
								s=removeData(s);
							}
							else
							{
								printf("\nINVALID OPTION\n");
							}
						}
					}
					break;
		case 3:
					display(s);
					break;
		case 4:
					return;
		default:
					printf("\nINVALID OPTION");

	}
	}
}