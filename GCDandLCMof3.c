#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp;
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcd_of_three(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int lcm_of_three(int a, int b, int c) {
    return lcm(lcm(a, b), c);
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    int result = lcm_of_three(num1, num2, num3);
    printf("LCM of %d, %d, and %d is %d\n", num1, num2, num3, result);
    result = gcd_of_three(num1,num2,num3);
    printf("GCD of %d, %d, and %d is %d\n", num1, num2, num3, result);
    return 0;
}
