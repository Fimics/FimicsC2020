//
// Created by mac on 2021/6/12.
//

#include "stdio.h"

void mPointer(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    // int **pp = &(&a); 不允许！！
    int ***ppp = &pp;

    printf("***ppp = %d\n", ***ppp);
    printf("**pp = %d\n", **pp);
    printf("*p = %d\n", *p);
    printf("a = %d\n", a);
}

int main(){
    mPointer();
    return 1;
}