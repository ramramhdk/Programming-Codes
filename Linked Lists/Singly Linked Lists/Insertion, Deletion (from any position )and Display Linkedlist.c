#include<stdio.h>
#include<malloc.h>

struct node{
	int info;
	struct node *next; 
}*start=NULL;

void insertbg()
{
	int info;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter info of node      ");
	scanf("%d",&info);
	newnode->info=info;
	newnode->next=start;
	start=newnode;
}
void insertany()
{
	int info,i,loc;
	struct node *newnode,*temp;
	temp=start;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter info of node      ");
	scanf("%d",&info);
	newnode->info=info;
	printf("Enter the loc at after insertion");
	scanf("%d",&loc);
	for(i=1;i<loc;i++)
	{
		temp=temp->next;
		
	}
	if(temp==NULL)
		{
			printf("Sorry,operation unseccessful");
			exit(0);
		}
		
    newnode -> next = temp ->next;
    temp ->next = newnode;
	
}
void append() //also called insert at end
{
	int info;
	struct node *newnode,*temp;
	temp=start;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter info of node      ");
	scanf("%d",&info);
	newnode->info=info;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		if(temp==NULL)
		{
			printf("Sorry,operation unseccessful");
			exit(0);
		}
		
	}
	temp->next=newnode;
	newnode->next=NULL;
	
}
void deletebg()
{
	struct node *temp;
	//If the list is already empty
	if(start->next == NULL)

	{
		printf("\nEmpty linked List. Deletion not possible.\n");
	}
	else
	{
		temp = start;
		start=start->next;
		free(temp);
		printf("\nNode deleted from the front.\n");
	}	
}

void deleteatend()
{
	struct node *temp,*temp1;
	temp=start;
	if(start->next == NULL)
	{
		printf("\nEmpty linked List. Deletion not possible.\n");
	}
	else
	{
		
	while (temp->next!=NULL)
	{
		temp1=temp;
		temp=temp->next;
		
	}
	temp1->next=NULL;
	free (temp);
		
	}
}


void deleteany()
{
	struct node *temp1,*temp;
	int loc,i;
	printf("Enter the after location to delete");
	scanf("%d",&loc);
	temp=start;
	for(i=1;i<loc;i++)
	{
		temp=temp->next;
		
	}
	temp1=temp->next;
	
	temp->next=temp1->next;
	free(temp1);
	
}
void display() // also called traverse
{
	struct node *temp1;
	temp1=start;
	while (temp1!=NULL)
	{
		printf("%d--->",temp1->info);
		temp1=temp1->next;
	}
	printf("NULL");
	
}
void reverse()
{
	struct node *pnode,*cnode,*nnode;
	cnode=start;
	nnode=cnode->next;
	cnode->next=NULL;
	while (nnode!=NULL)
	{
		pnode=cnode;
		cnode=nnode;
		nnode=nnode->next;
		cnode->next=pnode;
		
	}
	start=cnode;
	printf("Your linked list is REVERSED");
}
void main()
{
	int ch;
	while (1)
	{
		printf("\n1.insert bg\n2.delete end\n3.display or traverse\n4.exit\n5.Reverse\n6.Append or insert a end\n7.insert after at any loc\n8.delete front\n9.delete at after loc\n");
		printf("Enter choice  ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: 
			insertbg();
			break;
			case 2:
			deleteatend();
			break;
			case 3:
			display();
			break;
			case 4:
			exit (0);
			case 5:
			reverse();
			break;
			case 6:
			append();
			break;
			case 7:
			insertany();
			break;
			case 8:
			deletebg();
			break;
			case 9:
			deleteany();
			break;
		}
		
	}
}
