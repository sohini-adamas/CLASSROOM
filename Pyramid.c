//
// Created by USER on 10/5/2023.
//

#include <stdio.h>
int main(){
    int i,j,rows,k,m;
    printf("Enter rows:");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= (i); k++) {
            printf("* ");
        }
        printf("\n");
    }

}