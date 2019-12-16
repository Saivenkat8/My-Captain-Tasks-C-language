#include<stdio.h>
int main()
{
char name [30];
int age;
char mob [20];
printf ("Enter your first name,age, phone:\n");
scanf("%s %d %s",&name, &age, &mob);
printf("\nYour name is: %s\n",name);
printf ("Your age is: %d\n",age);
printf("your mobile number is: %s\n",mob);

return 0;
}