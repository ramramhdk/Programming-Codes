#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h>

struct node
{
   int info;
   struct node *next;
}*start;

void insert_info(int info)
{
    struct node *new_node,*temp; 
    temp=start;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->info=info;

    if(start==NULL)
    {
        start=new_node;
        start->next=NULL;
    }
    else
    {
         while(temp->next!=NULL)
         {
              temp=temp->next;
         }
         new_node->next=NULL;
         temp->next=new_node;
    }
}

void reverse_list()
{
    struct node *Nnode,*Pnode,*Cnode;
    Cnode=start;
    Nnode=Cnode->next;
    Cnode->next=NULL;
    while(Nnode!=NULL)
    {
         Pnode=Cnode;
         Cnode=Nnode;
         Nnode=Nnode->next;
         Cnode->next=Pnode;
    }
    start=Cnode;
}

void display()
{
    struct node *temp1;
    temp1=start;
    printf("\nlist of elments are \n");
    while(temp1!=NULL)
    {
         printf("%d   ",temp1->info);
         temp1=temp1->next;
    }
}

int main()
{
    int ch,info;
    start=NULL;

    printf(" 1.)  Insert node");
    printf("\n 2.)  display the list");
    printf("\n 3.)  reverse the nodes");
    printf("\n 4.)  exit");
    while(1)
    {
         printf("\nChoose to do operation :");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1 :
             {
             printf("\nEnter the info to be inserted in node ");
             scanf("%d",&info);
             insert_info(info);
             break;
             }
             case 2 :
             {
             display();
             break;
             }
             case 3 :
             {
             reverse_list();
             break;
             }
             case 4 :
             {
             exit(0);
             break;
             }
        }
   }
getch();
}
