#include <stdio.h>

int main()
{
    int sub1,sub2,sub3,sum;
    float avg;
    printf("enter the marks of 3 subjects:");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    sum=sub1+sub2+sub3;
    avg=sum/3;
    printf("the sum of 3 subjects is:%d\n",sum);
    printf("the average of three subjects:%f\n",avg);
    return 0;
}