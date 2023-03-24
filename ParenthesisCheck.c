#include<stdio.h>
char stack[20];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}

int empty()
{
    if(top == -1)
        return 0;
    else
        return 1;
}

int parenthesisCheck(char exp[])
{
    int i;
    char ch;

    for(i=0; exp[i] != '\0'; i++)
    {

        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[' )
        {
              push(exp[i]);
              continue;
        }

        if( empty() == 0 )
            return 0;

        switch(exp[i])
        {

        case ')':
            ch=pop();
            if(ch== '{' || ch== '[')
            return 0;
            break;


        case '}':
            ch=pop();
            if(ch== '(' || ch== '[')
            return 0;
            break;


        case ']':
            ch=pop();
            if(ch== '(' || ch== '}')
            return 0;
            break;
        }
    }

    if( empty() == 0)
        return 1;
    else
        return 0;

}


int main()
{
    char exp[20];
    char *e;
    int x;
    printf("Enter the expression :: ");
    scanf("%s",exp);

    x=parenthesisCheck(exp);
    if(x == 1)
    {
        printf("Balanced parenthesis\n");
    }
    else
        printf(" It is not balanced parenthesis\n");


    return 0;
}


