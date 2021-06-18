//
// Created by mac on 2021/6/11.
//

#include "stdio.h"

/**
 *指针运算
 */
// 指针在数组中 +- 整数
void testp1(){
    int a [] ={0,1,2,3,4,5,6,7,8,9};
    int *p= &a[5];
    printf("p5=%d",*p);

    p=p-2;
    printf("p5-2=%d",*p);


    // &数组名 +1
    printf("\n");
    printf("a = %p\n", a);
    printf("&a[0] = %p\n", &a[0]);

    printf("a+1 = %p\n", a+1); //a+1 = &a+4

    printf("&a   = %p\n", &a);
    printf("&a+1 = %p\n", &a + 1);

//    int *q = &a + 1; //野指针
//    printf("*q=%d\n",*q);

    if (p > a)
        printf("成立\n");

    else if (p < a)
        printf("不成立\n");

    else
        printf("== \n");
}

int main(){
    testp1();
    return 1;
}