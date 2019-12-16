#include<stdio.h>
#include<string.h>

 
typedef struct 
{
          char name[20], author[20],genre[20];
 
}bookdetail;
 
void output(bookdetail book);
 
void main()
{
 bookdetail book;
         {
 
                   printf("enter the book name:\n");
                   scanf("%s",book.name);
                   printf("enter the Author of book:\n");
                   scanf("%s",book.author);
                   printf("enter the type of book:\n");
                   scanf("%s",book.genre);
          }
 
          output(book);
 
}
 
void output(bookdetail book)
 
{
 
          {
 
                   printf("Book Name: %s \n",book.name);
                   printf("Book Author: %s \n",book.author);
                   printf("Book type:%s",book.genre);
 
          }
 
}