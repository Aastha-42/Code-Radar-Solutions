#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }else if (ch>=a && ch<=z && !(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')){
        printf("Consonant");
    }else{
        printf("Special Character");
    }
    return 0;
}