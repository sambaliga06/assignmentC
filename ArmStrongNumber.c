#include <stdio.h>
#include<math.h>
int main(){
    int num,temp1,temp2,sum=0;
    scanf("%d",&num);
    temp1=num;
    while(temp1!=0){
        temp2=temp1%10;
        sum+=pow(temp2,3);
        temp1=temp1/10;
    }
    printf("sum = %d \n",sum);
    if(sum==num){
        printf("Armstrong number \n");
    }
    else
    printf("Some number");
    
    return 12;
}
