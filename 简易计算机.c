# include <stdio.h>

int main() {

    char x;
    double firstnumber, secondnumber;

    printf("输入运算符号'+ , - , * , /':");
    scanf("%c", &x);

    printf("输入两个数字:");
    scanf("%lf %lf", &firstnumber, &secondnumber);

    switch (x) {
    case '+':
        printf("%lf + %lf = %lf", firstnumber, secondnumber, firstnumber + secondnumber);
        break;

    case '-':
        printf("%lf - %lf = %lf", firstnumber, secondnumber, firstnumber - secondnumber);
        break;

    case '*':
        printf("%lf * %lf = %lf", firstnumber, secondnumber, firstnumber * secondnumber);
        break;

    case '/':
        printf("%lf / %lf = %lf", firstnumber, secondnumber, firstnumber / secondnumber);
        break;

    default:
        printf("Errot!");
    }
    return 0;
}
