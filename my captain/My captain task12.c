#include <stdio.h>
#include<stdlib.h>
int c2f(int);
int f2c(int);
int main()
{
      int n;
      while(1)
      {
    printf("enter the corresponding number to perform the following operations:\n");
 printf("1. CELCIUS TO FAHRENHEIT\n");
    printf("2. FAHRENHEIT TO CELCIUS\n");
    printf("3. EXIT\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        c2f(n);
        break;
        case 2:
        f2c(n);
        break;
        case 3:
        exit(1);
        default:
        printf("error!you have entered a wrong number");
        break;
    }
      }
}
int c2f(int n)
{
    float f,c;
     printf("enter the tempereture in celsius:\n");
    scanf("%f",&c);
    f=(9*c/5)+32;
    printf("the temperature in celsius is:%f\n",c);
    printf("the temperature in fahrenheit is: %f\n",f);
    return 0;
}
int f2c(int n)
{
    float f,c;
     printf("enter the tempereture in fahrenheit:\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("the temperature in celsius is:%f\n",c);
    printf("the temperature in fahrenheit is: %f\n",f);
    return 0;
}