//
// Created by USER on 10/4/2023.
//
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the range:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d * %d=%d\n",i,j,i*j);
        }
        printf("--------------------\n");
    }
}