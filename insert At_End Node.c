#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void insert_At_End(struct node **head, int val)
{
    //create a new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next     = NULL;

    //if head is NULL, it is an empty list
    if(*head == NULL)
         *head = newNode;
    //Otherwise, find the last node and add the newNode
    else
    {
        struct node *endNode = *head;

        //last node's next address will be NULL.
        while(endNode->next != NULL)
        {
            endNode = endNode->next;
        }

        //add the newNode at the end of the linked list
        endNode->next = newNode;
    }

}

void print_Linkedlist(struct node *head)
{
    struct node *temp = head;

    //iterate the entire linked list and print the data
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
     struct node *head = NULL;

     insert_At_End(&head,10);
     insert_At_End(&head,20);
     insert_At_End(&head,30);

    print_Linkedlist(head);

     return 0;
}
