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
    int count_odd=0;
    for(int i=0;i<len;i++){
        if(arr[i]%2==0){
            total_even+=1;
        }else{
            count_odd+=1;
        }
    }
    printf("%d %d ", total_even, total_odd);
}