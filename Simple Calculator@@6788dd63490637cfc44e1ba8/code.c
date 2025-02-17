#include <stdio.h>
int main() {
    float double a,b;
    char c;
    scanf("%d%d%c", &a,&b,&c);
    switch (c){
        case '+':
        printf("%lf",a+b);
        break;
        case '-':
        printf("%lf",a-b);
        break;
        case '*':
        printf("%lf",a*b);
        break;
        case '/':
        printf("%lf",a/b);
        break;
        default:
        printf("Invalid Input");
    }
}