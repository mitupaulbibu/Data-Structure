#include <stdio.h>

int main()
{
    int node,edge,i,j,m,n, grp[100][100];

    for(i=0; i<100; i++)
        for(j=0; j<100; j++)
             grp[i][j]=0;


    scanf("%d %d",&node,&edge);

    for(i=0; i<edge; i++)
    {
        scanf("%d %d",&m,&n);
        grp[m][n]= grp[n][m] = 1;
    }

    for(i=1; i<=node; i++)
    {
        for(j=1; j<=node; j++)
              printf("%d ",grp[i][j]);

        printf("\n");
    }


    return 0;
}
