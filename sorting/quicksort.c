#include <stdio.h>

int findIndex(int *array, int n, int low, int high)
{
    int pivot = array[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (array[i] <= pivot)
        {
            i++;
        }
        while (array[j] >= pivot)
        {
            j--;
        }
        if (j > i)
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }

    } while (i < j);
    int temp = array[j];
    array[j] = array[low];
    array[low] = temp;
}

void quicksort(int *array, int n, int low, int high)
{

    while (high > low)
    {
        int j = findIndex(array, n, low, high);
        quicksort(array, n, low, j - 1);
        quicksort(array, n, j + 1, high);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array[8] = {4, 3, 2, 5, 7, 9, 1, 6};
    quicksort(array, n, 0, 7);
    return 0;
}