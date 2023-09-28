//
// Created by USER on 9/28/2023.
//
#include <stdio.h>

int main() {
    int a,b;
    printf("enter values of A and B\n");
    scanf("%d %d",&a,&b);
    while(a<b){
        if(a%2==0){
            printf("%d is an even number \n",a);
        }
        a++;
    }
    return 0;
}