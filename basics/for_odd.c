#include <stdio.h>
int main()
{
    // for (int i = 1; i <= 99; i=i+2)
    // {
    //     printf("%d\n", i);
    // }
    // int a = 16%3;
    // printf("%d",a);
    int a = 0;
    int n;
    scanf("%d", &n);
    for (int P = 2; P <= n - 1; P++)
    {
        if (n % P == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 1)
    {
        printf("the number is not prime");
    }
    else
    {

        printf("the number is prime");
    }
    return 0;
}