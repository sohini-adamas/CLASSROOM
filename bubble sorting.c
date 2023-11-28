//
// Created by USER on 11/28/2023.
//
#include<stdio.h>
int main(){
    int arr[]={2,92,5,76,90,54,23,50,77,};
    int start= 0;
    int stop=9;
    for(int i=0;i<stop;i++){
        for (int j=0;j<=stop-1;j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<stop;i++){
        printf("%d ",arr[i]);
    }
}