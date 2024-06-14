
#include <stdio.h>

int sumation(int a[],int n){
    int sum=0;
    for(int i =0; i<n;i++){
        sum+= a[i];
    }
    return sum;
}
int main() {

   int n,i;
   scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    int mina,temp;
    mina = sumation(a,n);
    for(i=n-1;i>=0;i--){
        temp = sumation(a,i);
        if(temp<mina)
        mina=temp;
    }
    printf("***\nmin money = %d",-mina);
    return 0;
}
