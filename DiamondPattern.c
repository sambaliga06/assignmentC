#include <stdio.h>

int main() {
  int i , j,row;
  scanf("%d",&row);
    for(i=0; i<=row; i++)
    { 

        for(j=i; j<row; j++)
        {
            printf(" ");
        }


        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
    

   for (i = 1; i <= row; i++) 
    {

        for (j = 0; j < i; j++) 
        {
            printf(" ");
        }
        for (j = 1; 
             j <= ((row-1) * 2 - (2 * i - 1)); 
             j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
