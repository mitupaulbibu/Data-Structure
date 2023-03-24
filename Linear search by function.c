#include<stdio.h>

void bubble_short(int array[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1; j++)
            if(array[j]<array[j+1])

    {
       temp=array[j];
       array[j]=array[j+1];
       array[j+1]=temp;
    }
    return;
}
void linear_search(int array, int n)
{
     int  i, loc, item;
     scanf("%d", &item);

    loc=-1;
    for(i=0; i<n; i++)
        if(array[i]==item)
    {
        loc=i;
        break;
    }
    if(loc==-1)
        printf("Data is not found \n ", loc);
    else
        printf("\nData is found in location %d ", loc+1);
}
void print_array(int array[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int array[100], n, i, loc,item;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &array[i]);

        printf("Enter location number: ");


    return 0;
}
