//
// Created by mac on 2021/6/14.
//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//共用体   union 共用体名称  成员列表  共用体变量名
union vars
{
    double a;
    float b;
    int c;
    short d;
    char f;
    //char arr[17];//17
}var;
int main13()
{
    printf("%d\n", sizeof(var));
    var.a = 100;
    var.b = 3.14;
    var.c = 66;
    printf("%f\n", var.a);
    printf("%f\n", var.b);
    printf("%d\n", var.c);

    system("pause");
    return EXIT_SUCCESS;
}