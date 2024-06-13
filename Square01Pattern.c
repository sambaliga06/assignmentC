#include <stdio.h>
#include <stdlib.h>

int main() {
  int h,count,i,j;
  scanf("%d",&h);
  for(i=1;i<=h;i++){
      for(j=1;j<=h;j++){
          if(i==1||j==1||i==h||j==h)
            printf("1 ");
            else
            printf("0 ");
            
      }
      printf("\n");
  }

  
    return 0;
}
