//
// Created by USER on 10/5/2023.
//
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n!=(-1)){
        L1:
        printf("Hello World\n");
        goto L1;
    }
    else
        printf("EXIT");
}
