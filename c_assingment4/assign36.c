// WAP to sort the elements of an array entered by the user using selection sort.

#include <stdio.h>

int main()
{

    int n, i, j, min_idx, temp;

    // Ask user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input array elements from the user
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i; // Assume the first unsorted element is the minimum

        // Find the minimum element in the unsorted part of the array
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the current element
        if (min_idx != i)
        {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    // Output the sorted array
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
