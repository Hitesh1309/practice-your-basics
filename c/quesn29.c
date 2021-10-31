#include <stdio.h>
#include <string.h>

void circularShift(int ar[], int n)
{
    int temp = ar[0];
    for (size_t i = 0; i < n-1; i++)
        ar[i] = ar[i+1];
    ar[n-1] = temp;
    
}

void rotate(int ar[], int d, int n)
{
    for (size_t i = 0; i < d; i++)
        circularShift(ar,n);
    
}

int main()
{
    int n, d;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int ar[n];

    printf("Enter the elements of the array: ");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("Enter the value of d: ");
    scanf("%d", &d);

    rotate(ar, d, n);

    printf("The array after rotation is:\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d  ", ar[i]);
    }
    printf("\n");
    
    
}
