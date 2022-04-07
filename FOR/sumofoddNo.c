#include <stdio.h>
int main()
{
    int sum=0;
    printf("0 to 10 odd nos are : ");
    for(int i=1; i<=10; i=i+2)
    {
        sum=sum+i;
        printf("%d ",i);
    }
        printf("\n");

    printf("The sum of the N0s is : %d ",sum);
    return 0;
}