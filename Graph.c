#include<stdio.h>

int main()
{
    int node, edge, i, j, m, n, grp[100][100];

    for(i=0; i<100; i++)
        for(j=0; j<100; j++)
        grp[i][j]=0;

    scanf("%d %d", &node, &edge);

    for(i=0; i<edge; i++)
    {
        scanf("%d %d", &m, &n);
        grp[m][n]=1;
    }

    for(i=1; i<=node; i++)
    {
        if(grp[4][i]==1)
            printf("%d ", i);
    }

    return 0;
}
