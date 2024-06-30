#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2;
    char operator;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    switch(operator){
        case '+':
            printf("The result is %f\n", num1 + num2);
            break;
        case '-':
            printf("The result is %f\n", num1 - num2);
            break;
        case '*':
            printf("The result is %f\n", num1 * num2);
            break;
        case '/':
            printf("The result is %f\n", num1 / num2);
            break;
        case '^':
            printf("The result is %f\n", pow(num1, num2));
            break;
        default:
            printf("Invalid operator\n");
    }
    system("pause");
    return 0;
}