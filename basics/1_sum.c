#include <stdio.h>
#include <conio.h>

int sumofnumber(int a,int b){
    return a+b;
}
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);

   int sum = sumofnumber(n1,n2);
   printf("The sum is %d ", sum);
   return 0;
}