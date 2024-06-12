int main() {
    // Write C code here
   int i,n,pos,temp,j;

   printf("Enter the size \n");
   scanf("%d",&n);
   int a[n],rot;
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   printf("Enter number of rotations \n");
   scanf("%d",&rot);
   rot=rot%n;
   for(i=1;i<=rot;i++){
       temp=a[0];
       for(j=0;j<n-1;j++){
           a[j]=a[j+1];
       }
       a[n-1]=temp;
   }
   
for(i=0;i<n;i++){
       printf("%d\t",a[i]);
   }

    return 0;
}
