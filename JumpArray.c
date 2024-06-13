#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<n-1){
        if(a[i]==0){
            break;
        }
        i += a[i];
        
    }
    if(i==n-1){
        printf("TRUE \n");
        
    }else
    printf("FALSE \n");
    return 0;
}
