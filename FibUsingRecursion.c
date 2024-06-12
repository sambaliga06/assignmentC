#include <stdio.h>
int fib(int l){
    if(l<=1) 
    return l;
    else
    return (fib(l-1)+fib(l-2));
}

int main() {
    // Write C code here
    int num,n0=0,n1=1,i=0,temp;
    scanf("%d",&num);
for(int i=0;i<num;i++)
printf("%d\t",fib(i));
    return 0;
}
