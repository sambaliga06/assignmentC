#include <stdio.h>
int main() {
    // Write C code here
    int num,temp,n;
    scanf("%d",&num);
    n=num;
    while(num>0){
        temp = num%10;
        if(temp%2!=0)
        printf("%d",temp);
        num=num/10;
    }
    num=n;
    while(num>0){
        temp = num%10;
        if(temp%2==0)
        printf("%d",temp);
        num=num/10;
    }

    return 0;
}
