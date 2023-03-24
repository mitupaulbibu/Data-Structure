#include<stdio.h>

void function(int i, int n)
{
    if(i<=n)
    {
        printf("%d ", i);
        i++;
        function(i, n);
    }

    else
        return;
}


int main()
{
    int n, result;
    printf("Enter the value: ");
    scanf("%d", &n);
    function(1, n);
    return 0;
}
