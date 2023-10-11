//
// Created by USER on 10/11/2023.
//
#include <stdio.h>
int sum(int n){
    int sum = n*(n+1)/2;
    printf("Sum = %d",sum);
}
int main(){
    int n=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    sum(n);
}