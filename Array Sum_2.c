#include<stdio.h>
int main()

{
    int ar1[100][100],ar2[100][100],res[100][100],row,column,i,j;
    printf("Enter row and column no:");
    scanf("%d %d",&row,&column);


    for(i=0;i<row;i++)
        for(j=0;j<column;j++)
            scanf("%d",&ar1[i][j]);

    for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
           scanf("%d",&ar2[i][j]);
        }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            {
                res[i][j] = ar1[i][j] + ar2[i][j];
            }
    }
         printf("\nSum of two matrices: \n");
    for(i=0;i<row;++i)
        {
            for(j=0;j<column;++j)
            {
            printf(" %d   ",res[i][j]);
            if(j==column-1)
                printf("\n\n");
            }
        }

  return 0;



}
