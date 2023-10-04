//
// Created by USER on 10/4/2023.
//
#include <stdio.h>
int main ()
{
    int n,temp1=1,temp2=1,backup=0;
    printf("No. of rows you want to print:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=temp1;j++){
            printf("*");
        }
        printf("\n");
            backup=temp2;
            temp2=temp1+temp2;
            temp1=backup;
    }
}