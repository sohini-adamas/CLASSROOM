//
// Created by USER on 11/28/2023.
//
#include<stdio.h>
int main() {
    int n, rem, result = 0;
    printf("enter number:");
    scanf("%d", &n);
    while (n!=0) {
        rem = n % 10;
        result += rem * rem * rem;
        n /= 10;
    }
    if (result == n)
        printf("armstrong");
    else {
        printf("not armstrong");
    }
}