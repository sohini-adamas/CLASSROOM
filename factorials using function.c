//
// Created by USER on 10/12/2023.
//
#include <stdio.h>
int fact(int c, int pro, int a) {
    while (a <= c) {
        pro = pro * a;
        a++;
    }
    printf("factorial = %d", pro);
}
int main(){
    int a=1,pro=1,c;
    printf("Enter your Number:\n");
    scanf("%d",&c);
    fact(c,pro,a);
    }