#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,temp,sum=0;
    scanf("%d",&a);
    while(a>0){
        temp=a%10;
        if(temp%2!=0){
        sum+=temp;
        }
        a/=10;
    }
    printf("Sum is %d \n",sum);
}
