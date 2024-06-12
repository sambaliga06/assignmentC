/*Sample input 1
5

Sample output 1
5
45
345
2345
12345*/

#include <stdio.h>

int main() {
    // Write C code here
    int num,i,j;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=num-i;j<=num;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
