//
// Created by USER on 10/30/
#include<stdio.h>

int sum_n(int n,int sum){
    sum= sum+n;
    int i=n-1;
    if(n<1){
        return sum;
    }
    return sum_n(i,sum);
}
int main(){
    int n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("sum will be= %d",sum_n(n,sum));
}