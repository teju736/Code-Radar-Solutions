#include <stdio.h>

int main() {
    int a, b;
    char o;

    // Read input correctly
    scanf("%d %d", &a, &b);
    scanf(" %c", &o);  // Space before %c to consume newline

    // Perform operations based on the operator
    if (o == '+') {
        printf("%d\n", a + b);
    } else if (o == '-') {
        printf("%d\n", a - b);
    } else if (o == '*') {
        printf("%d\n", a * b);
    } else if (o == '/') {
        if (b != 0) {
            printf("%d\n", a / b);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Error: Invalid operator\n");
    }

    return 0;
}