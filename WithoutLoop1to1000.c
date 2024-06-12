#include <stdio.h>

int main() {

    int i=1;
    start:
    printf("%d\t",i);
    i++;
    if(i<=1000)
    goto start;
    return 0;
}
