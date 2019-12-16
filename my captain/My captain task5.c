#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int p,i;
    printf("enter a number:\n");
    gets(a);
    printf("the reversed number is:\n");
    p=strlen(a);
    for(i=p-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
