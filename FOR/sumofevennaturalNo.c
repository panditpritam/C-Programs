#include <stdio.h>
int main()
{
    int sum=0;
    for(int i=2; i<=10; i=i+2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}