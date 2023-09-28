//
// Created by USER on 9/28/20
#include <stdio.h>

int main() {
    int c;
    printf("enter the number of the day :\n");
    scanf("%d",&c);
    switch (c)
    {
        case 1:
        printf("its Sunday!!");break;
        break;
         case 2:
        printf("its Monday!!");break;
        break;
         case 3:
        printf("its Tuesday!!");break;
        break;
         case 4:
        printf("its Wednesday!!");break;
        break;
         case 5:
        printf("its Thurseday!!");break;
        break;
         case 6:
        printf("its Friday!!");break;
        break;
         case 7:
        printf("its Saturday!!");break;
        break;
        default:
        printf("INVALID INPUT!!");
        break;
    }
    return 0;
}