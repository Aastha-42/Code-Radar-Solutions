#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%d%d%c", &a,&b,&c);
    switch (c){
        case '+':
        printf("%f",a+b);
        break;
        case '-':
        printf("%f",a-b);
        break;
        case '*':
        printf("%f",a*b);
        break;
        case '/':
        if (b!=0)
        printf("%f",a/b);
        else
        printf("error");
        break;
        default:
        printf("Invalid Input");
    }
}