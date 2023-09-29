//
// Created by USER on 9/29/2023.
//
#include <stdio.h>

int main() {
    char c;
    printf("enter your character :\n");
    scanf("%c",&c);
    switch (c)
    {
        case 97:
            printf("its a vowel!!");break;
            break;
        case 101:
            printf("its a vowel!!");break;
            break;
        case 105:
            printf("its a vowel!!");break;
            break;
        case 111:
            printf("its a vowel!!");break;
            break;
        case 117:
            printf("its a vowel!!");break;
            break;
        default:
            printf("its a consonant");
            break;
    }
    return 0;
}