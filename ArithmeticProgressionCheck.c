#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
   int i, j,temp,n,diff;
   scanf("%d",&n);
   int arr[n];
   for (i = 0; i < n; i++)
    scanf("%d",&arr[i]);
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j + 1])
                 { temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;}}}
                
                
  /*    for (i = 0; i < n; i++)
    printf("%d\t",arr[i]);*/
    diff=arr[1]-arr[0];
    for(i=1; i<n-1; i++){
        if((arr[i+1]-arr[i])!=diff)
            {
                printf("Not in Aritmetic Progression \n");
                exit(0);
            }
    }
    printf("It is in Arithmetic Progression ");
    return 0;
}
