// 27.*WAP to sort an array element using selection sort

#include <stdio.h>

// to print array
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

// to take array input
void inputArray(int arr[], int n)
{
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}
// Swapping
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// implementing selection sort
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(&arr[min], &arr[i]);
    }
}

int main()
{
    // taking number of elements
    int num;
    printf("Enter the number of elements:");
    scanf("%d", &num);

    // taking input
    int arr[num];
    inputArray(arr, num);

    // calling selection_sort function
    selection_sort(arr, num);

    // printing sorted elements
    printf("Sorted elements:");
    displayArray(arr, num);

    return 0;
}
