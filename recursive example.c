//
// Created by USER on 11/1/2023.
//
#include<stdio.h>
int sum_n(int n,int sum){
    sum=sum+n;
    int i=n-1;
    if(n<1){
        return sum;
    }
    return sum_n(i,sum);
}
int main (){
    int n,sum=0;
    printf("enter the value of n: \n");
    scanf("%d",&n);
    printf("sum = %d",sum_n(n,sum));
}