#include<stdio.h>
int main(){

    char opeations;
    double num1, num2;

    printf("Enter the opeator(+,-,*,/): ");
    scanf("%c",&opeations);
    printf("Enter the operand num1 and num2: ",num1,num2);
    scanf("%lf %lf",&num1,&num2);

    switch (opeations)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf",num1,num2,num1+num2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf",num1,num2,num1-num2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf",num1,num2,num1*num2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf",num1,num2,num1/num2);
        break;
    
    default:
        printf("Error opeator is not correct!");
        break;
    }

    return 0;
}