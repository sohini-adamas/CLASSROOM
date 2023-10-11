//
// Created by USER on 10/11/2023.
//
#include <stdio.h>
int swap(int a,int b){
    int n;
    n=a;
    a=b;
    b=n;
    printf("A = %d\n",a);
    printf("B = %d\n",b);
}
int main(){
    int a=0,b=0;
    printf("Enter A and B\n");
    scanf("%d %d",&a,&b);
    swap(a,b);
}