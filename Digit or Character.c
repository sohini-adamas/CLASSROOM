//
// Created by USER on 10/4/2023.
//
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("enter your character:\n");
    scanf("%c",&ch);

    if(isdigit(ch)){
        printf("Its a digit!!");
    }
    else if(isalpha(ch)){
        printf("Its an alphabet!!");
    }
    else{
        printf("Its a special character!!");
    }
}