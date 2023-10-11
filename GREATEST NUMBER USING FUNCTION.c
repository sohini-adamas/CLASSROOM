//
// Created by USER on 10/11/2023.
//
#include <stdio.h>
int grt(int a,int b)
    {
        if(a>b) {
            printf("%d is greater", a);
        }
        else{
            printf("%d is greater",b);
        }
    }
    int main() {
    int a=0, b=0;
        printf("Enter A and B\n");
        scanf("%d %d", &a, &b);
        grt(a, b);

    }