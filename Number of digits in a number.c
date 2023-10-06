//
// Created by USER on 10/7/2023.
//
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>=0 && n<10){
        printf("ITS A SINGLE DIGIT NUMBER!!");
    }
    else if(n>=10 && n<100){
        printf("ITS A DOUBLE DIGIT NUMBER!!");
    }
    else if(n>=100 && n<1000){
        printf("ITS A THREE DIGIT NUMBER!!");
    }
    else if(n>=1000 && n<100000){
        printf("ITS A FOUR DIGIT NUMBER!!");
    }
    else if(n>=100000 && n<1000000){
        printf("ITS A FIVE DIGIT NUMBER!!");
    }
    else{
        printf("MORE THAN EQUAL TO SIX DIGITS!!");
    }
}