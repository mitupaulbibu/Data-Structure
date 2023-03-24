#include<stdio.h>
int rear=-1, front=-1, que[100], maxSize;

void enQueue(int item)
{
    if(rear==maxSize-1)
    {
        printf("Queue is Full\n");
        return;
    }
    if(rear==-1)
        front=0;

    rear=rear+1;
    que[rear]=item;
    printf("%d is inserted successfully in queue\n", item);
    return;
}

int deQueue()
{
    if(front==-1|| front>rear)
    {
        printf("Queue is empty\n");
        return;
    }
    int item=que[front];
    front=front+1;
    return item;
}

void display()
{
    int i;
  for(i=front; i<=rear; i++)
    printf("%d", que[i]);

  printf("\n");
}

int main()
{
    int x;
    maxSize=3;

    x=deQueue();
    if(x!=-1)
    {
        printf("value=%d\n",x);
    }

    enQueue(5);
    enQueue(10);
    enQueue(15);
    enQueue(20);

    x=deQueue();
    if(x!=-1)
    {
        printf("value=%d\n",x);
    }

    x=deQueue();
    if(x!=-1)
    {
        printf("value=%d\n", x);
    }

    x=deQueue();
    if(x!=-1)
    {
        printf("value=%d\n",x);
    }

    return;

}
