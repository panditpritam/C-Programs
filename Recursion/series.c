#include <stdio.h>
int n = 1;


void series(int num){

    if(n == 11){
        return;
    }

    printf("%d * %d = %d\n", num,n, num*n);
    n  = n + 1;
    series(num);


}

int main()
{
    int num;
    scanf("%d", &num);
    series(num);
    return 0;
}