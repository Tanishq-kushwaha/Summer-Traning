#include<stdio.h>
int main(){
    int num1, num2;
    char op;
    printf("Enter your no : ");
    scanf("%d",&num1);
    printf("Enter your next no : ");
    scanf("%d",&num2);
    printf("Choose operator ('+', '-', '*', '/') : ");
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("Sum : %d",num1 + num2);
        break;
        case '-':
        printf("Substraction : %d",num1 - num2);
        break;
        case '*':
        printf("Multiplication : %d", num1 * num2);
        break;
        case '/':
        printf("Division : %f",(float)num1 / num2);
        break;
        default:
        printf("invalid input");
    }
    return 0;
}