#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Result = %d\n", a / b);
    }

    return 0;
}