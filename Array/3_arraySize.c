#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // that's how we print the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d", n);


    return 0;
}