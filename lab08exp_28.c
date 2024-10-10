// 28.WAP to sort the elements of the array in ascending order using Bubble Sort technique
#include <stdio.h>
// to take array input
void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

// to print array
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

// swaping
int swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// implementing bubble sort
void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main()
{
    // taking number of elements
    int num;
    printf("Enter the number of elements:");
    scanf("%d", &num);

    // input of elements by user
    int arr[num];
    inputArray(arr, num);

    // calling function
    bubble_sort(arr, num);

    // printing sorted elements
    printf("Sorted elements:");
    displayArray(arr, num);

    return 0;
}