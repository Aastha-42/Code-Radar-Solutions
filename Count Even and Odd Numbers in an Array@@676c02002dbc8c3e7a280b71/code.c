// Your code here...
#include<stdio.h>
int main(){
    int len;
    scanf("%d", &len);
    int arr[len];
    for(int i=0;i<len;i++){
        scanf("%d", arr[i]);  
    }
    int total_even=0;
    for(int i=0;i<len;i++){
        if(arr[i]%2==0){
            total_even++;
        }
    }
    total_odd=0;
    for(int i=0;i<len;i++){
        if(arr[i]%2!=0){
            total_odd++;
        }
    }
    printf("%d ", total_even);
    printf("%d ", total_odd);
}