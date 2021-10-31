#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int ar[n]; // constant memory
    memset (ar, 0, sizeof (int) * n);

    printf("Enter the elements of the array: ");
    for (size_t i = 0; i < n; i++) // assuming values only between 0 to n-1
    {
        int input;
        scanf("%d", &input);
        ar[input]++; // something like hashing
    }

    printf("The repeating elements are: \n");
    for (size_t i = 0; i < n; i++)
    {
        if(ar[i] > 1) // O(n)
            printf("%d  ", i);
    }
    printf("\n");
    
}