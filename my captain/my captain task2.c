#include <stdio.h>

int main()
{
    float c,f;
    printf("enter the tempereture in celsius:\n");
    scanf("%f",&c);
    f=(9*c/5)+32;
    printf("the temperature in celsius is:%f\n",c);
    printf("the temperature in fahrenheit is: %f\n",f);
    return 0;
}