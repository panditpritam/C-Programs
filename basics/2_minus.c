#include <stdio.h>
#include <conio.h>

int minusofnumber(int a,int b)
{
    return a-b;
}
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);

   int minus = minusofnumber(n1,n2);
   printf("The sum is %d ", minus);
   return 0;
}