#include <stdio.h>
int top=-1, stk[100], maxSize;

void push(int item)
{
    if(top == maxSize-1 )
    {
        printf("Stack is Overflow\n");
        return;
    }
    top=top+1;
    stk[top]=item;
    printf("%d is inserted successfully in stack\n",item);
    return;
}

int pop()
{
    if(top == -1)
    {
        printf("Stack is underflow\n");
        return  -1;
    }

    int item=stk[top];
    top--;
    return item;
}

void display()
{
    int i;
    for(i=top ; i> -1; i--)
        printf("%d ",stk[i]);

    printf("\n");
}

int main()
{

    int x;
    maxSize=3;
    push(10);
    push(20);
    push(30);

    x = pop();
    if(x != -1)
    {
        printf("value = %d \n", x);
    }


    display();

    return 0;
}
