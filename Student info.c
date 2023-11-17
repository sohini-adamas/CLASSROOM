//
// Created by USER on 11/17/2023.
//
#include<stdio.h>
#include<string.h>
int main(){
    struct stu{
        char name[15];
        int age;
        long int ph_no;
    };

    struct stu sd[5];
    for(int i=0;i<5;i++){
        printf(" ENTER NAME:\n");
        gets(sd[i].name);
        printf("ENTER AGE:\n");
        scanf("%d",&sd[i].age);
        printf("ENTER PH_NO.:\n");
        scanf("%ld",&sd[i].ph_no);
        getchar();
    }
    for(int i=0;i<5;i++){
        printf("%s\n",sd[i].name);
        printf("%d\n",sd[i].age);
        printf("%ld\n",sd[i].ph_no);
        printf("-----------------\n");
    }
}