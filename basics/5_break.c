#include <stdio.h>
int main()
{
    for(int i=2; i<=10; i++)
    {
        if (i==8)
        {
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}