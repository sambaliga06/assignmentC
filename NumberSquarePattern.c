#include <stdio.h>

int main() {

   int num , limit;
   scanf("%d",&num);
   limit=num*2;
   for(int row=1;row<limit;row++,printf("\n"))
   {
       for(int col=1;col<limit;col++)
       printf("%d",MIN(MIN(row,col),MIN(limit-row,limit-col)));
   }}
