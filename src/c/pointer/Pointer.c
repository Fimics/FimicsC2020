//
// Created by mac on 2021/6/10.
//

#include "stdio.h"

//1指针使用
void testPointer1() {
    int a = 10;
    int *p = &a;

    printf("*p = %d\n", *p);
    printf("p =%d\n", p);

    printf("sizeof(int *) = %u\n", sizeof(int *));
    printf("sizeof(short *) = %u\n", sizeof(short *));
    printf("sizeof(char *) = %u\n", sizeof(char *));
    printf("sizeof(long *) = %u\n", sizeof(long *));
    printf("sizeof(double *) = %u\n", sizeof(double *));
    printf("sizeof(void *) = %u\n", sizeof(void *));
}

//2
void testPointer2() {
    //野指针1
//    int *p;
//    *p = 2000;
//    printf("*p = %d\n", *p);

    int m;
    //int *p = 1000;   // 0-255 确定留给操作系统
    int *p = 0x0bfcde0000;
    p = &m;
    *p = 2000;
    printf("*p = %d\n", *p);
}

void nullPointer() {
    int *p = NULL;   // NULL == 0
    if (p != NULL) {
        *p = 300;
        printf("*p = %d\n", *p);
    }

}

// 万能指针、泛型指针
void voidPointer() {
    int a = 345;
    char ch = 'r';
    void *p;
    p = &ch;
    printf("ch =%c\n", *(char *) p);
    p = &a;
    printf("a=%d\n", *(int *) p);
}

void const1() {
    const int a = 20;
    printf("&a =%d\n", &a);
//    a=90;
    int *p = &a;
    *p = 650;

    printf("a=%d\n", a); //20
    printf("&a =%d\n", &a);
}

#if 0

#endif

//const int *p;
//可以修改 p
//不可以修改 *p。
//int const *p;
//同上。
void const2() {
    int a = 30;
    int b = 20;

    const int *p = &a;

    printf("*p =%d\n", *p);
//    *p=90;
    p = &b;
    printf("*p =%d\n", *p);
}

void const3() {

//    int * const p;
//    可以修改 *p
//    不可以修改 p。
    int a = 1;
    int b = 2;

    int *const p = &a;
//    p =&b;
    *p = b;

    printf("*p =%d\n", *p);
}

void const4(){

//    const int *const p;
//    不可以修改 p。
//    不可以修改 *p。
//
//    总结：const 向右修饰，被修饰的部分即为只读。

    int a =1;
    int b =2;

    const int * const p = &a;
//    p = &b;
//      *p = b;

}

int main() {
//    testPointer1();
//    testPointer2();
//    nullPointer();
//    voidPointer();
//      const1();
//    const2();
//    const3();
    return 1;
}
