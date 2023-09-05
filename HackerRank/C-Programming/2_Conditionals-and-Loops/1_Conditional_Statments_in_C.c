#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// solved : 20/08/2023


int main()
{
    // Write Your Code Here
    int n;
    scanf("%d",&n);
    switch(n){
        case 0 : printf("zero\n"); break;
        case 1 : printf("one\n"); break;
        case 2 : printf("two\n"); break;
        case 3 : printf("three\n"); break;
        case 4 : printf("four\n"); break;
        case 5 : printf("five\n"); break;
        case 6 : printf("sex\n"); break;
        case 7 : printf("seven\n"); break;
        case 8 : printf("eight\n"); break;
        case 9 : printf("nine\n"); break;
        default: printf("Greater than 9\n"); break;
    }
/*
    if(n==0){
        printf("zero");
    }else if(n==1){
        printf("one");
    }else if(n==2){
        printf("two");
    }else if(n==3){
        printf("three");
    }else if(n==4){
        printf("four");
    }else if(n==5){
        printf("five");
    }else if(n==6){
        printf("sex");
    }else if(n==7){
        printf("seven");
    }else if(n==8){
        printf("eight");
    }else if(n==9){
        printf("nine");
    }else{
        printf("Greater than 9");
    }
*/
    return 0;
}
