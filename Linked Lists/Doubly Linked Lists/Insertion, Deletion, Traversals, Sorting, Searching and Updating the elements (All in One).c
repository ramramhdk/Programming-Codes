/*
 * C Program to Implement a Doubly Linked List & provide Insertion, Deletion & Display Operations
 */
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    struct node *prev;
    int info;
    struct node *next;
}*start,*newnode,*temp,*temp2,*temp4;
 
void insert_bg();
void insert_end();
void insert_any();
void traversebeg();
void traverseend(int);
void sort();
void search();
void update();
void delet();
 
int count = 0;
 
void main()
{
    int ch;
 
    start = NULL;
    newnode = temp = NULL;
 
    printf("\n 1 - Insert at beginning");
    printf("\n 2 - Insert at end");
    printf("\n 3 - Insert at position i");
    printf("\n 4 - delet at i");
    printf("\n 5 - Display from beginning");
    printf("\n 6 - Display from end");
    printf("\n 7 - Search for element");
    printf("\n 8 - Sort the list");
    printf("\n 9 - Update an element");
    printf("\n 10 - Exit");
 
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_bg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_any();
            break;
        case 4:
            delet();
            break;
        case 5:
            traversebeg();
            break;
        case 6:
            temp2 = start;
            if (temp2 == NULL)
                printf("\n Error : List empty to display ");
            else
            {
                printf("\n Reverse order of linked list is : ");
                traverseend(temp2->info);
            }
            break;
        case 7:
            search();
            break;
        case 8:
            sort();
            break;
        case 9:
            update();
            break;
        case 10:
            exit(0);
        default:
            printf("\n Wrong choice menu");
        }
    }
}
 
/* TO create an empty node */
void create()
{
    int info;
 
    newnode =(struct node *)malloc(1*sizeof(struct node));
    newnode->prev = NULL;
    newnode->next = NULL;
    printf("\n Enter value to node : ");
    scanf("%d", &info);
    newnode->info = info;
    count++;
}
 
/*  TO insert at beginning */
void insert_bg()
{
    if (start == NULL)
    {
        create();
        start = newnode;
        temp = start;
    }
    else
    {
        create();
        newnode->next = start;
        start->prev = newnode;
        start = newnode;
    }
}
 
/* To insert at end */
void insert_end()
{
    if (start == NULL)
    {
        create();
        start = newnode;
        temp = start;
    }
    else
    {
        create();
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}
 
/* To insert at any position */
void insert_any()
{
    int pos, i = 2;
 
    printf("\n Enter position to be inserted : ");
    scanf("%d", &pos);
    temp2 = start;
 
    if ((pos < 1) || (pos >= count + 1))
    {
        printf("\n Position out of range to insert");
        return;
    }
    if ((start == NULL) && (pos != 1))
    {
        printf("\n Empty list cannot insert other than 1st position");
        return;
    }
    if ((start == NULL) && (pos == 1))
    {
        create();
        start = newnode;
        temp = start;
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        create();
        newnode->prev = temp2;
        newnode->next = temp2->next;
        temp2->next->prev = newnode;
        temp2->next = newnode;
    }
}
 
/* To delete an element */
void delet()
{
    int i = 1, pos;
 
    printf("\n Enter position to be deleted : ");
    scanf("%d", &pos);
    temp2 = start;
 
    if ((pos < 1) || (pos >= count + 1))
    {
        printf("\n Error : Position out of range to delete");
        return;
    }
    if (start == NULL)
    {
        printf("\n Error : Empty list no elements to delete");
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        if (i == 1)
        {
            if (temp2->next == NULL)
            {
                printf("Node deleted from list");
                free(temp2);
                temp2 = start = NULL;
                return;
            }
        }
        if (temp2->next == NULL)
        {
            temp2->prev->next = NULL;
            free(temp2);
            printf("Node deleted from list");
            return;
        }
        temp2->next->prev = temp2->prev;
        if (i != 1)
            temp2->prev->next = temp2->next;    /* Might not need this statement if i == 1 check */
        if (i == 1)
            start = temp2->next;
        printf("\n Node deleted");
        free(temp2);
    }
    count--;
}
 
/* Traverse from beginning */
void traversebeg()
{
    temp2 = start;
 
    if (temp2 == NULL)
    {
        printf("List empty to display \n");
        return;
    }
    printf("\n Linked list elements from begining : ");
 
    while (temp2->next != NULL)
    {
        printf(" %d ", temp2->info);
        temp2 = temp2->next;
    }
    printf(" %d ", temp2->info);
}
 
/* To traverse from end recursively */
void traverseend(int i)
{
    if (temp2 != NULL)
    {
        i = temp2->info;
        temp2 = temp2->next;
        traverseend(i);
        printf(" %d ", i);
    }
}
 
/* To search for an element in the list */
void search()
{
    int info, count = 0;
    temp2 = start;
 
    if (temp2 == NULL)
    {
        printf("\n Error : List empty to search for info");
        return;
    }
    printf("\n Enter value to search : ");
    scanf("%d", &info);
    while (temp2 != NULL)
    {
        if (temp2->info == info)
        {
            printf("\n info found in %d position",count + 1);
            return;
        }
        else
             temp2 = temp2->next;
            count++;
    }
    printf("\n Error : %d not found in list", info);
}
 
/* To update a node value in the list */
void update()
{
    int info, info1;
 
    printf("\n Enter node info to be updated : ");
    scanf("%d", &info);
    printf("\n Enter new info : ");
    scanf("%d", &info1);
    temp2 = start;
    if (temp2 == NULL)
    {
        printf("\n Error : List empty no node to update");
        return;
    }
    while (temp2 != NULL)
    {
        if (temp2->info == info)
        {
 
            temp2->info = info1;
            traversebeg();
            return;
        }
        else
            temp2 = temp2->next;
    }
 
    printf("\n Error : %d not found in list to update", info);
}
 
/* To sort the linked list */
void sort()
{
    int i, j, x;
 
    temp2 = start;
    temp4 = start;
 
    if (temp2 == NULL)
    {
        printf("\n List empty to sort");
        return;
    }
 
    for (temp2 = start; temp2 != NULL; temp2 = temp2->next)
    {
        for (temp4 = temp2->next; temp4 != NULL; temp4 = temp4->next)
        {
            if (temp2->info > temp4->info)
            {
                x = temp2->info;
                temp2->info = temp4->info;
                temp4->info = x;
            }
        }
    }
    traversebeg();
}
