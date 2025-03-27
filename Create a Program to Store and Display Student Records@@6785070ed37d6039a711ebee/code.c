// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int roll;
    char name;
    float marks;
    scanf("%d %s %f", &roll, &name, &marks);
    printf("Roll Number: %d, Name: %s, Marks: %.1f", roll, name, marks);
    return 0;
}