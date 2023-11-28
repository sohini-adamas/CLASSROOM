//
// Created by USER on 11/28/2023.
//
#include<stdio.h>
int main(){
    int n;
    int a=65;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",a);
        }
        printf("\n");
        a++;
    }
}