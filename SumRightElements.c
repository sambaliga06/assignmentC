#include<stdio.h>

int main() {
    // Write C code here
   int i,n,pos,temp,j,sum;

   printf("Enter the size \n");
   scanf("%d",&n);
   int a[n],rot;
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
  for(i=0;i<n-1;i++){
       sum=0;
       for(j=i+1;j<n;j++){
           sum += a[j];
       }
       a[i]=sum;
   }
   a[n-1]=0;
for(i=0;i<n;i++){
       printf("%d\t",a[i]);
   }

    return 0;
}
