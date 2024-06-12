#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b) a>b?a:b
#define MIN(a,b) a<b?a:b

int main()
{  int num1,num2,num3,lnum,snum,mnum;
scanf("%d%d%d",&num1,&num2,&num3);lnum=MAX(MAX(num1,num2),num3);
snum=MIN(MIN(num1,num2),num3);
mnum=num1+num2+num3-lnum-snum;
printf("%d> %d >%d",lnum,mnum,snum);
    return 0;
}
