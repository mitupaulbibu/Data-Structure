#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insert_At_Begin(struct node **head, int value)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
     newNode->next=NULL;

     newNode->next=*head;
     *head=newNode;
    return;
}

void print_Linkedlist(struct node *head)
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    return;
}

int main()
{
    struct node *head=NULL;
    print_Linkedlist(head);

    insert_At_Begin(&head, 20);
    print_Linkedlist(head);
    insert_At_Begin(&head, 10);
    insert_At_Begin(&head, 5);
    print_Linkedlist(head);

    return 0;
}
