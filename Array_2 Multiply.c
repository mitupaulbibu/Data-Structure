#include<stdio.h>
int main()
{
    int row1,col1,row2,col2;
    printf("Enter row and collum of first matrix");
    scanf("%d%d",&row1,&col1);
    printf("Enter row and col of second matrix");
    scanf("%d%d",&row2,&col2);
    while(col1!=row2)
    {
        printf("error !!row1 is not match with col1");
        printf("Enter row and collum of first matrix");
        scanf("%d%d",&row1,&col1);
        printf("Enter row and col of second matrix");
        scanf("%d%d",&row2,&col2);
    }
    int a[row1][col1];
    int i,j;
    printf("matrix a\n");
    for(i=0;i<row1;i++)
    {

        for(j=0;j<col1;j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    int b[row2][col2];
    printf("matrix b\n");
    for(i=0;i<row2;i++)
    {

        for(j=0;j<col2;j++)
        {
            printf("b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }

    }
    int result[row1][col2];
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            for(int k=0;k<col1;k++)
            {
                int sum=0;
                sum=sum+a[i][k]*b[k][j];
                result[i][j]=sum;
            }
        }
    }
    printf("\n");
    printf("A=");
    for(i=0;i<row1;i++)
    {
        printf("\t");
        for(j=0;j<col1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("B=");
    for(i=0;i<row2;i++)
    {
        printf("\t");
        for(j=0;j<col2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Result=");
    for(i=0;i<row1;i++)
    {
        printf("\t");
        for(j=0;j<col2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}
