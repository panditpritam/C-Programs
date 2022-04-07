#include <stdio.h>
int main()
{   int i,sum=0;
printf("The first 10 natural number is : ");
    for(int i = 1;i<=10;i++)
    {
        sum=sum+i;
        printf("%d ", i);
    }
    printf(" \nThe sum of the first 10 natural number is : %d",sum);
    return 0;

}