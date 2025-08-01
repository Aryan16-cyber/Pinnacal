#include<stdio.h>

int main() {
    int num1, num2; 
    char oper;

    printf("enter first number: ");
    scanf("%d", &num1);

    printf("enter second number: ");
    scanf("%d", &num2);

    printf("enter operator (+, -, *, /) : ");
    scanf(" %c", & oper);

    switch (oper) {
        case '+':
            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %d", num1, num2, num1 / num2);
            break;
        default:
            printf("invalid operator");
            break;
    }
    return 0;
}