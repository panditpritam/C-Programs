#include <stdio.h>

int sum = 0;


int func(int a)
{
    if(a == 0){
        return sum;
    }
    sum = sum + a;
    a = a - 1 ;
    func(a);

  
}
int main()
{
    int n;
    scanf("%d", &n);

    int p  = func(n);
    printf("%d", p);
    return 0;
}