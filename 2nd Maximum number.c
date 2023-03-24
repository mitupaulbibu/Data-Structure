#include <stdio.h>

#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE], size, i;
    int max1, max2, min;

    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = min;

    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
        else if(arr[i] > max3 && arr[i] < max2)
        {
            max3 = arr[i];
        }
    }

    printf("First Maximum = %d\n", max1);
    printf("Second Maximum = %d", max2);
    printf("Third Maximum = %d", max3);


    return 0;
}
