#include <stdio.h>

void merge(int ar[],int l, int m,int r)
{
    int n1,n2, i, j,k ;

    n1=m-l+1;
    n2=r-m;
    int L[n1], R[n2];

    for(i=0; i<n1; i++)
        L[i]= ar[i+l];
    for(j=0; j<n2; j++)
        R[j]= ar[j+m+1];
    i=j=0;
    k=l;

    while(i <n1 && j <n2)
    {
        if(L[i] <= R[j])
        {
            ar[k]=L[i];
            i++;
        }
        else
        {
            ar[k]=R[j];
            j++;
        }
        k++;
    }


    while(i <n1)
    {
        ar[k]=L[i];
        i++;
        k++;
    }


    while(j <n2)
    {
        ar[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(int ar[],int l,int r)
{
    int m;
    if( l < r)
    {
        m = (l+r)/2;
        mergeSort(ar,l,m);
        mergeSort(ar,m+1,r);
        merge(ar,l,m,r);

    }
}


void printarray(int ar[],int n)
{
    int i;
    for(i=0; i<n ;i++)
        printf("%d ",ar[i]);

    printf("\n");
}


int main()
{
    int ar[100],n, i, j ,loc, item;
    scanf("%d",&n);
    for(i=0; i<n ;i++)
        scanf("%d",&ar[i]);

    mergeSort(ar,0,n-1);
    printarray(ar,n);

    return 0;
}

