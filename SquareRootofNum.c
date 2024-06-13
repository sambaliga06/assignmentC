#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

   float result = sqrt(num);
    printf("Result is %f\n", result);

    return 0;
}
