#include <stdio.h>
int main()
{
    int sum =0;
    printf("The numbers are : ");
    for(int i = 0;i<7;i++){
        int a ;
        scanf("%d",&a);
        sum = sum + a;
    }
    printf("The sum of the numbers is : %d", sum);
    return 0;
}