// 25.WAP to search an element in a array using Linear Search
#include <stdio.h>

// to take input array
void inputArray(int arr[], int n)
{
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

// to print array
void displaArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
}

// swapping
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// linear serach algorithm
int linear_search(int arr[], int n, int search)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == search)
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    // taking number of elements
    int num, search;
    printf("Enter the number of elements:");
    scanf("%d", &num);

    // input of elements by user
    int arr[num];
    inputArray(arr, num);

    // searching element
    printf("Enter the number you want to search:");
    scanf("%d", &search);

    // calling function and applying conditions
    if (linear_search(arr, num, search) == 1)
        printf("%d is present in array", search);
    else if (linear_search(arr, num, search) == 0)
        printf("%d is not present in array", search);

    return 0;
}