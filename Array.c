#include<stdio.h>

int main()
{
    int a[100] [100], row, col, i, j;
    printf("Enter row and column number: ");
    scanf("%d %d", &row,&col);

    for(i=0; i<row; i++) {
        for(j=0; j<col; j++){
            scanf("%d ", &a[i][j]);
        }
    }

    printf("Enter Matrix:\n ");
   for(i=0; i<row; i++)
        {
        for(j=0; j<col; j++)
            {
                printf("%d ",a[i][j]);
                printf("\n");
            }

        }
    return 0;
}
