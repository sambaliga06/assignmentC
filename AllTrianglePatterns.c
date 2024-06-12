#include <stdio.h> 
  
int main() 
{ 
    int rows ,i ,j,k; 
    scanf("%d",&rows);

    printf("Right Half triangle \n);
    for (i = 0; i < rows; i++) { 
        for (j = 0; j <= i; j++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 

    printf("\nLeft Half Triangle");
    for (i = 0; i < rows; i++) { 
        for (j = 0; j < 2*(rows-i)-1; j++) { 
            printf(" "); 
        } 
        for (k = 0; k <= i; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
     printf("\nInverted Right Half Triangle");
     for (i = 0; i < rows; i++) { 
        for (j = 0; j < rows - i; j++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 

    printf("\nInverted Left Half Triangle");
  for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < 2 * i; j++) { 
            printf(" "); 
        } 
        for (int k = 0; k < rows - i; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 

    return 0; 
}
