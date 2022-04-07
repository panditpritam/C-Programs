#include <stdio.h>
int main()
{
    int num , k=1;
    printf("The number is : ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        k=k*i;
    }
        printf("%d",k);
    return 0;
}