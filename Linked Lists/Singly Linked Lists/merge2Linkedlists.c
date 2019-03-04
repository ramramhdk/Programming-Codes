#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*next;
};
void append();
void merge();
void main()
{
	struct node*start1=NULL;
	struct node*temp;
	int i=1;
	while(i!=0)
	{
		int n;
		printf("enter a number:");
		scanf("%d",&n);
		append(&start1,n);
		printf("enter (1) to add an element or enter (0):");
		int ch;
		scanf("%d",&ch);
		i=ch;
	}
	printf("\nlinked list 1:");
	temp=start1;
	printf("\n%d",temp->info);
	while(temp->next!=NULL)
	{
		temp=temp->next;
		printf("\n%d",temp->info);
	}
	struct node*start2=NULL;
	temp=start2;
	i=1;
	while(i!=0)
	{
		int n;
		printf("\nenter a number:");
		scanf("%d",&n);
		append(&start2,n);
		printf("enter (1) to add an element or enter (0):");
		int ch;
		scanf("%d",&ch);
		i=ch;
	}
	printf("\nlinked list 2:");
	temp=start2;
	printf("\n%d",temp->info);
	while(temp->next!=NULL)
	{
		temp=temp->next;
		printf("\n%d",temp->info);
	}
	merge(&start1,&start2);
	printf("\nmerged linked list:");
	temp=start1;
	printf("\n%d",temp->info);
	while(temp->next!=NULL)
	{
		temp=temp->next;
		printf("\n%d",temp->info);
	}
	getche();
}
void append(struct node**s,int num)
{
	struct node*temp=*s;
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=num;
	newnode->next=NULL;
	if(*s==NULL)
	{
		*s=newnode;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void merge(struct node**s1,struct node**s2)
{
	struct node*temp1=*s1;
	struct node*temp2=*s2;
	append(s1,temp2->info);
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
		append(s1,temp2->info);
	}
}
