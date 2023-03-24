#include<stdio.h>

void function(int n)
{
    if(n>=1)
    {
        printf("%d ", n);

        function(n-1);
    }
    else
        return ;

}

int main()
{
    int n,result;
    scanf("%d",&n);
    function(n);
    return 0;

}
