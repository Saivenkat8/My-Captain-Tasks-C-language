#include <stdio.h>

int main()
{
    int num,i,k;
    printf("enter a number to get its multipication table:\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        k=num*i;
        printf("%d*",num);
        printf("%d=%d",i,k);
        printf("\n");
    }
}