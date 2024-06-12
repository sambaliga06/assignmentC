#include <stdio.h>
int main() {
    // Write C code here
    int num,n0=0,n1=1,i=0,temp;
    scanf("%d",&num);
    if(num==1){
        printf("0");
    }else if(num==2){
        printf("0\t1");
    }else{
    while(i<num){
        printf("%d\t",n0);
        temp=n0+n1;
        n0=n1;
        n1=temp;
        i++;
    }
}}
