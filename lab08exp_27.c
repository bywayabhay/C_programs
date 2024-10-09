// 27.*WAP to sort an array element using selection sort

#include <stdio.h>
// Swapping
int swap(int *ptr1, int *ptr2)
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

    // input of elements by user
    int arr[num];
    printf("Enter the elements:");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    // calling function
    selection_sort(arr, num);

    // printing sorted elements
    printf("Sorted elements:");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
