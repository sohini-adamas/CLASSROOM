//
// Created by USER on 11/1/2023.
//
#include <stdio.h>
int main(){
    int size;
    printf("enter size of the array:");
    scanf("%d",&size);
    int numbers[size];

    for(int i=0;i<size;i++){
        printf("enter the element in index no. %d: ",i);
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",numbers[i]);
    }
}