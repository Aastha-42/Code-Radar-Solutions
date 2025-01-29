#include <stdio.h>
int main()
{
    char a,c;
    int b;
    scanf("%c %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %c\n",a);
    printf("Age: %d\n", b);
    printf("Hobby: %s", c);
    return 0;
}