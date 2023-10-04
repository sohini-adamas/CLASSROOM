//
// Created by USER on 10/4/2023.
//
#include <stdio.h>
int main ()
{
    int n,i=1;
    printf("Enter the number you want a table for: \n");
    scanf("%d",&n);
    for(int i;i<=10;i++){
        int product=n*i;
        printf("%d x %d=%d",n,i,product);
        printf("\n");
    }

}