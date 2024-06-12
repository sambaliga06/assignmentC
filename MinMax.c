#include <stdio.h>

int main() {
    int n,i,min,max;
    scanf("%d",&n);
    int a[n];
    printf("Enter elements \n");
    for(i=0;i<n;scanf("%d",&a[i]),i++);
    min=max=a[0];
    for(i=1;i<n;i++){
        max = max<a[i]?a[i]:max;
        min = min>a[i]?a[i]:min;
    }
    printf("Min = %d \nMax = %d",min,max);
    
    return 0;
