//
// Created by USER on 11/30/2023.
//decimal to binary nd vice versa

#include <stdio.h>
#include<math.h>
int convert(long long n) {

    int dec = 0, i = 0, rem;

    while (n != 0) {

        // get remainder of n divided by 10
        rem = n % 10;

        // divide n by 10
        n /= 10;

        // multiply rem by (2 ^ i)
        // add the product to dec
        dec += rem * pow(2, i);

        // increment i
        ++i;
    }
    return dec;
}
long long convert2(int n) {

    // variable to store the result
    long long bin = 0;

    int rem, i = 1;

    // loop to convert to binary
    while (n != 0) {

        // get remainder of n divided by 2
        rem = n % 2;

        // divide n by 2
        n /= 2;

        // multiply remainder by i
        // add the product to bin
        bin += rem * i;

        // multiply i by 10
        i *= 10;
    }

    return bin;
}

int main(){
    int c;
    long long n;
    printf("what do you wanna enter 1.binary 2.decimal\n");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("enter your binary number:");
            scanf("%lld",&n);
            printf("the decimal number for it is: %d",convert(n));
            break;
        case 2:
            printf("enter your decimal number:");
            scanf("%lld",&n);
            printf("the binary number for it is: %d",convert2(n));
    }


}


