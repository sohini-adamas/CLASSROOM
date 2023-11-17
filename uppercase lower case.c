//
// Created by USER on 11/6/2023.
//
#include <stdio.h>

int main(){
    char c;
    printf("eneter c:");
    scanf("%c",&c);
    if(c>=65 && c<=90){
        printf("its uppercase");
    }
    else(c>=97 && c<=122);{
        printf("lowercase");
    }
}