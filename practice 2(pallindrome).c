//
// Created by USER on 11/28/2023.
//
#include<stdio.h>
int main(){
    int n,rem,rev,original;
    printf("number:");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(original==rev){
        printf("pallindrome");
    }
    else{
        printf("not pallindrome");
    }
}