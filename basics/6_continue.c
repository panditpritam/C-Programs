#include <stdio.h>
int main()
{
    int i = 2;
    while (i <= 10)
    {
        if(i==4){
            i++;
            continue;
        }
        if(i ==8){
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}