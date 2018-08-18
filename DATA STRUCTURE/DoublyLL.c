#include <stdio.h>
struct DLL
{
	int data;
	struct DLL *next,*prev;
};

struct DLL *insertAtEnd(struct DLL *h)
{
	struct DLL *temp,*p;
	int d;
	printf("INSERT THE DATA:\t");
	scanf("%d",&d);
	p=(struct DLL *)malloc(sizeof(struct DLL));
	if (p==NULL)
	{
		printf("NOT ENOUGH MEMORY");
		return h;
	}
	p->data=d;
	p->next=p->prev=NULL;
	if(h==NULL)
	{
		h=p;
	}
	else
	{
		temp=h;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		if(temp->next==NULL)
		{
			temp->next=p;
			p->prev=temp;
		}
	}
	return h;
}


void display(struct DLL *h)
{
	struct DLL *temp;
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



struct DLL *insertAtBegin(struct DLL *h)
{
	struct DLL *p,*temp;
	int d;
	printf("\nENTER THE DATA:\t");
	scanf("%d",&d);
	p=(struct DLL *)malloc(sizeof(struct DLL));
	if(p==NULL)
	{
		printf("NOT ENOUGH MEMORY");
		return h;
	}
	p->data=d;
	p->next=p->prev=NULL;
	if(h==NULL)
	{
		h=p;
	}
	else
	{
		p->next=h;
		h->prev=p;
		h=p;
	}
return h;
}



struct DLL *insertAfter(struct DLL *h)
{
	struct DLL *temp,*p;
	int d,key;
	printf("ENTER THE DATA:\t");
	scanf("%d",&d);
	p=(struct DLL *)malloc(sizeof(struct DLL));
	if(p==NULL)
	{
		printf("NOT ENOUGH MEMORY");
		return h;
	}
	p->data=d;
	p->next=p->prev=NULL;
	printf("\nENTER THE KEY:\t");
	scanf("%d",&key);
	temp=h;
	while(temp->data!=key)
	{
		temp=temp->next;
	}
	if(temp->data=key)
	{
		p->next=temp->next;
		temp->next->prev=p;
		temp->next=p;
		p->prev=temp;
	}
	else
	{
		printf("\nKEY NOT FOUND\n");
	}
	return h;
}


struct DLL *insertBefore(struct DLL *h)
{
	struct DLL *temp,*p;
	int d,key;
	printf("\nENTER THE DATA:\t");
	scanf("%d",&d);
	p=(struct DLL *)malloc(sizeof(struct DLL));
	if(p==NULL)
	{
		printf("NOT ENOUGH MEMORY");
		return h;
	}
	p->data=d;
	p->next=p->prev=NULL;
	printf("\n\tENTER THE KEY:\t");
	scanf("%d",&key);
	temp=h;
	while(temp->data!=key)
	{
		temp=temp->next;
	}
	if(temp->data=key)
	{
		p->prev=temp->prev;
		temp->prev->next=p;
		p->next=temp;
		temp->prev=p;
	}
	else
	{
		printf("\nKEY NOT FOUND\n");
	}
return h;
}


struct DLL *removeEnd(struct DLL *h)
{
	struct DLL *temp;
	temp=h;
	if(temp==NULL)
	{
		printf("EMPTY LINK LIST\n");
		return h;
	}
	if(temp->next==NULL)
	{
		free(temp);
		return h;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	if(temp->next==NULL)
	{
		temp->prev->next=NULL;
		temp->prev=NULL;
		free(temp);
	}
return h;
}



struct DLL *removeBegin(struct DLL *h)
{
	struct DLL *temp;
	temp=h;
	if(temp==NULL)
	{
		printf("EMPTY LINK LIST\n");
		return h;
	}
	else
	{
	h=temp->next;
	temp->next=NULL;
	h->prev=NULL;
	free(temp);
	}
return h;
}


struct DLL *removeData(struct DLL *h)
{
	int key;
	struct DLL *temp;
	temp=h;
	if(temp==NULL)
	{	
		printf("EMPTY LINK LIST\n");
		return h;
	}
	printf("\n\tENTER THE DATA TO BE DELETED:\t");
	scanf("%d",&key);
	while(temp->next!=NULL)
	{
		if(temp->data!=key)
		{
			temp=temp->next;
			break;
		}
	}
	if (temp->next==NULL || temp->data==key)
	{
		temp->prev->next=NULL;
		temp->prev=NULL;
		free(temp);
	}
	if(temp->data==key)
	{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	}
	else
	{
		printf("\nELEMENT NOT FOUND\n");
	}

return h;	
}


void main()
{
	struct DLL *s;
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
					printf("\n1.REMOVE END\n2.REMOVE BEGINING\n3.REMOVE A DATA\n");
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
