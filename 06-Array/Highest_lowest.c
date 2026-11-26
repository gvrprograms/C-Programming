#include <stdio.h>

int main()
{
    int n, i, highest, lowest;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    highest = arr[0];
    lowest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > highest)
        {
            highest = arr[i];
        }

        if(arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }

    printf("Highest element is: %d\n", highest);
    printf("Lowest element is: %d\n", lowest);

    return 0;
}