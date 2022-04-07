#include <stdio.h>
#include <math.h>
int main()
{
    for(int i=1; i<=10;i++)
    {
        int a = pow(i,3);
        printf("The cube of %d is-----> %d\n", i, a);

    }
    return 0;
}