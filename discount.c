//
// Created by USER on 10/2/2023.
//
#include<stdio.h>
int main()
{
    int mrp,discount;
    printf("Enter the MRP:\n");
    scanf("%d",&mrp);
    printf("Enter discount percent:\n");
    scanf("%d",&discount);
    if(discount>10 && discount<50){
        printf("GST is 18%\n");
        int total=mrp-(mrp*discount/100)+(18*mrp/100);
        printf("Total is %d",total);
    }
    else{
        printf("GST is 2%\n");
        int total= mrp-(mrp*discount/100)+(2*mrp/100);
        printf("Total is %d",total);
    }
}