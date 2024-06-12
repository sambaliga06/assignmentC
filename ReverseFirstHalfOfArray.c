#include <stdio.h>
int main() {
    // Write C code here
   int i=0,n,temp,half;

   printf("Enter the size \n");
   scanf("%d",&n);
   int a[n],rot;
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
half=n/2;

    for(i=half-1;i>=0;i--){
        printf("%d\t",a[i]);
    }
    for(i=half;i<n;i++){
         printf("%d\t",a[i]);
    }
    

    return 0;
}
