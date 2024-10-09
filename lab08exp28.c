// 28.WAP to sort the elements of the array in ascending order using Bubble Sort technique
#include <stdio.h>
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
    printf("Enter the elements:");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    // calling function
    bubble_sort(arr, num);

    // printing sorted elements
    printf("Sorted elements:");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}