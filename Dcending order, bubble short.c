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
    int array[100], n, i, j, temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &array[i]);
    bubble_short(array,n);
    print_array(array,n);


    return 0;
}
