#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert_At_Begin(struct node **head, int value)
{
   struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next= NULL;

    newNode->next=*head;
    *head=newNode;
    return;
}

void insert_At_End(struct node **head, int value)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next     = NULL;

    if(*head == NULL)
         *head = newNode;
    else
    {
        struct node *temp = *head;

        while(temp->next != NULL)
        {
           temp = temp->next;
        }

        temp->next = newNode;
        return;
    }
    return;
}

void insert_at_position(struct node** head,int value, int position)
{
    struct node* cur = *head;

   if(position==1)
   insert_At_Begin(head,value);

   int i;
   for(i=3; i<=position; i++)
   {
       cur=cur->next;
   }
   struct node* cur_after=cur->next;
   struct node* newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=value;
   newnode->next=cur_after;
   cur->next=newnode;

   return;
}

void print_Linkedlist(struct node* head)
{
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    return;


    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp= temp->next;
    }
    printf("\n");
}
int main()
{
     struct node *head = NULL;

    insert_At_Begin(&head,20);
    insert_At_Begin(&head,10);
    insert_At_Begin(&head,5);
    print_Linkedlist(head);
    insert_At_End(&head,30);
    print_Linkedlist(head);
    insert_at_position(&head, 40,3);
    print_Linkedlist(head);

    return 0;
}
