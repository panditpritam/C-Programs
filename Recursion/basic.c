#include <stdio.h>


int sum(int a,int b)
{
    return a+b;
}

int main()

{
    

    int p = sum(23,46);
    int q = sum(45,67);
    int r = sum(9,7);
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",r);

    
    return 0;
}