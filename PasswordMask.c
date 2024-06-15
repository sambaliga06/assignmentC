#include <stdio.h>
#include <stdlib.h>
void main()
{
 char pasword[10], ch;
 int i;
 printf("Enter the password any 8 characters: ");

 for(i=0;i<8;i++)
 {
  ch = getch();
  pasword[i] = ch;
  ch = '*' ;
  printf("%c",ch);
 }
 pasword[i] = '';


 printf("nYour password is :");
 for(i=0;i<8;i++)
 {
  printf("%c",pasword[i]);
 }
