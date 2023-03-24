#include<stdio.h>
int main()
{
    int ar[100],n,i,j,temp;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);

    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-1;j--)
        if(ar[j]>ar[j+1])
    {
        temp =ar[j];
        ar[j]=ar[j+1];
        ar[j+1]= temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",ar[i]);

    return 0;
}
