#include<stdio.h>
int main(){
    int i,n; 
    for(i = 1;i <= 8;i++){
        printf("3の倍数 = %d\n",i * 3);
    }
    while(i <= 16){
        printf("3の倍数 = %d\n",i * 3);
        i++;
    }
}