include <stdio.h>


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num << 3;
    printf("Result is %d\n", result);

    return 0;
}
