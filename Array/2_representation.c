#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int pritam[n];
for( int i= 0; i<n; i++){
    scanf("%d", &pritam[i]);
}
for( int i= 0; i<n; i++){
    printf("%d\n", pritam[i]);
}
    return 0;
}