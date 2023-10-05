//
// Created by USER on 10/5/2023.
//
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number lines you want to print:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for (int j = 1; j <=n ; j++) {
            printf(" ");
        }
        for(int i=1;i<=n;i++){
            printf("%d",i);
            i++;
        }
        --i;
        printf("%d",i);
        i--;
    }
    printf("\n");
}