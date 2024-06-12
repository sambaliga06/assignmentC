#include <stdio.h>

void Pendulum(int arr[],int n){
     int i, j, min_idx,temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            {
                temp=arr[min_idx];
                arr[min_idx]=arr[i];
                arr[i]=temp;
            }
    }
    for(i=n-1;i>=0;i=i-2){
        printf("%d\t",arr[i]);
    }
    if(n%2==0){
    for(i=0;i<n;i=i+2){
        printf("%d\t",arr[i]);
    }}
    else{
          for(i=1;i<n;i=i+2){
        printf("%d\t",arr[i]);
    }
    }
    
    
    
}
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    printf("Enter \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    Pendulum(arr,n);

    return 0;
}
