#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    printf("enter the 1st string:\n");
    gets(a);
    printf("enter the 2nd string:\n");
    gets(b);
    strcat(a,b);
    printf("the string after combining 2 strings:%s\n",a);
    return 0;
    }