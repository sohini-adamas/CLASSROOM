//
// Created by USER on 10/11/2023.
//
#include <stdio.h>
int ly(int n){
    if(n%4==0 && n%100!=0 || n%400==0){
        printf("Its a Leap Year!!");
    }
    else{
        printf("Its not a leap year");
    }
}
int main(){
    int n=0;
    printf("Enter year:");
    scanf("%d",&n);
    ly(n);
}