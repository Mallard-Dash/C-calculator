/* Basic calculator with +, -, *, / and exit */
/*Created by Vincent (Mallard-Dash) 4th April 2025*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void plus(int x, int y){
    int sum = x + y;
    printf("The sum of %d + %d is: %d\n", x, y, sum);
}

void neg(int x, int y){
    int result = x - y;
    printf("The result of %d - %d is: %d\n", x, y, result);
}

void multiply(int x, int y){
    int result = x * y;
    printf("The product of %d * %d is: %d\n", x, y, result);
}

void division(int x, int y){
    int result = x / y;
    printf("The quotient of %d / %d is: %d\n", x, y, result);
}

int main() {
    while (1) {
        int x, y;
        char operation[10];

        printf("\nEnter a number: ");
        scanf("%d", &x);

        printf("Enter another number: ");
        scanf("%d", &y);

        printf("Choose operation (+, -, *, /) or type 'exit' to quit: ");
        scanf("%s", operation);

        if (strcmp(operation, "exit") == 0) {
            printf("Calculator terminated. Goodbye!\n");
            break;
        }
        else if (strcmp(operation, "+") == 0) {
            plus(x, y);
        }
        else if (strcmp(operation, "-") == 0) {
            neg(x, y);
        }
        else if (strcmp(operation, "*") == 0) {
            multiply(x, y);
        }
        else if (strcmp(operation, "/") == 0) {
            if (y == 0) {
                printf("Error! Can't divide by zero!\n");
            } else {
                division(x, y);
            }
        }
        else {
            printf("Error! Unknown operation. Try again.\n");
        }
    }

    return 0;
}
