#include <stdio.h>
int main()
{
    int r, c, a[100][100], b[100][100], mul[100][100], i, j, k;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            {
                printf("Enter element a %d%d: ", i, j);
                scanf("%d", &a[i][j]);
            }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            {
                printf("Enter element b %d%d: ", i, j);
                scanf("%d", &b[i][j]);
            }

    printf("multiply of the matrix=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
    printf("\n");
    }
    return 0;
}
