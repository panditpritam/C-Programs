#include <iostream>
using namespace std;
int main()
{   int i,sum=0;
    for(int i = 1;i<=10;i++)
    {
        sum=sum+i;
        printf("%d ", i);
    }
    printf(" \nThe sum of the first 10 natural number is : %d\n",sum);
    printf(" \nThe sum of the first 10 natural number is : %f.00\n",sum/10);
    return 0;

}