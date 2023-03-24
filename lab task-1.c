#include<stdio.h>

void print_array(int n, int b[]) {
    int i;
    for(i=0; i<n; i++)
        printf("position = %d value = %d\n", i, b[i]);
    return;
}

void insert_at_Position(int ar[], int n, int position, int value) {
    int i;
    for(i = n-1; i >= position - 1; i--)
        ar[i+1] = ar[i];

    ar[position - 1] = value;
    return;
}

int main() {

    int ar[100],n,i,position,value;
    scanf("%d",&n);

    for(i = 0; i<n; i++)
        scanf("%d",&ar[i]);

    print_array(n,ar);

    scanf("%d", position);

    for(i = position - 1; i<n-1; i++)
        ar[i] = ar[i+1];
    n = n - 1;

    print_array(n, ar);

    return 0;
}
