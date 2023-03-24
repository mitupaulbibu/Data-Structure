#include<stdio.h>
int main()
{
   int i, first, last, middle, n, item, array[100];
   printf("Enter number of elements:");
   scanf("%d",&n);
   printf("Enter %d integers:", n);
   for (i = 0; i < n; i++)
      scanf("%d",&array[i]);
      printf("Enter the value to find:");
      scanf("%d", &item);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while (first <= last)
    {
      if (array[middle] < item)
         first = middle + 1;
      else if (array[middle] == item)
      {
         printf("%d is present at index %d\n", item, middle+1);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list\n", item);
   return 0;
}
