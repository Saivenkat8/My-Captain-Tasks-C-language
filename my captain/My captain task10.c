#include<stdio.h>
int main()
{
    int n,i,j=0,k;
    printf("enter a number to construct a pyramid:\n");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
    for(i=0;i<n-j;i++)
    {
        printf("%d",i+1);
    }
    printf("\n");
    j++;
    }
}