#include <stdio.h>
int main() {
    int n, p;
    scanf("%d", &n);
    p=1
    for( int i=1; i<=10; i++){
        p= n*i;
        printf("%d * %d = %d \n",n, i , p);
    }
    return 0;
}