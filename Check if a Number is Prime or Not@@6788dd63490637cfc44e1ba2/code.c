#include <stdio.h>
int main() {
    int n,i,flag=0;
    scanf("%d", &n);
    if (n==2 || n==3 || n==5 || n==7 || n==11 || n==13 || n==17 || n==19 || n=23){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    
    return 0;
}