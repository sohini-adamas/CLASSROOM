//
// Created by USER on 10/30/2023.
//
#include<stdio.h>

int disp(int n){
    printf("hello world sl no: %d\n",n);
    n++;
    disp(n);
}
int main(){
    int n=1;
    disp(n);
}