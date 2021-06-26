//
// Created by mac on 2021/6/20.
//

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * 二级指针做输入参数的特性
 * @param pArray
 * @param len
 */

void printArray(int **pArray, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\n", *pArray[i]);
    }
}

void test01() {
    //创建在堆区  主调函数分配内存，被调函数使用内存
    int **pArray = malloc(sizeof(int *) * 5);

    //在栈上创建5个数据
    int a1 = 10;
    int a2 = 20;
    int a3 = 30;
    int a4 = 40;
    int a5 = 50;

    pArray[0] = &a1;
    pArray[1] = &a2;
    pArray[2] = &a3;
    pArray[3] = &a4;
    pArray[4] = &a5;

    //打印数组
    printArray(pArray, 5);

    //释放堆区数据
    if (pArray != NULL) {
        free(pArray);
        pArray = NULL;
    }

}

void freeSpace(int **pArray, int len) {
    for (int i = 0; i < len; i++) {
        free(pArray[i]);
        pArray[i] = NULL;
    }

}

void test02() {
    //创建在栈区
    int *pArray[5];

    for (int i = 0; i < 5; i++) {
        pArray[i] = malloc(4);
        *(pArray[i]) = 10 + i;
    }

    printArray(pArray, 5);

    //释放堆区
    freeSpace(pArray, 5);

}

int main() {

    test01();
//    test02();
    return EXIT_SUCCESS;
}