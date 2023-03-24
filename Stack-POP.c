#include<stdio.h>

int top=-1, stk[100], maxSize=3;

int pop()
{
    if(top==-1)
    {
        printf("Stack is underflow\n");
        return -1;
    }
    int item=stk[top];
    top--;
    return item;
}

void display()
{
    int i;
    for(i=top; i>-1; i--)
        printf("%d",stk[i]);

    printf("\n");
}

int main()
{
    int X;
    maxSize=3;
    pop(10);
    pop(20);
    pop(30);

    display();

    return 0;
}
