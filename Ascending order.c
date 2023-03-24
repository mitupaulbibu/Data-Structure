#include<stdio.h>

int main()
{
    int k, N;
    int PTR=1;
    printf("Enter a number ");
    scanf("%d", &N);

    while(PTR<=N-k)
    {
        if(PTR>PTR+1)
        {
            printf("%d ", PTR);
        }
        PTR=PTR+1;
    }
     printf("\n %d", PTR);




    return 0;
}
