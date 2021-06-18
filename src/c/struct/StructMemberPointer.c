//
// Created by mac on 2021/6/14.
//

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * 结构体成员为指针
 */
struct stuinfo {
    char *name;
    int age;
};

int main() {
    struct stuinfo si;
    si.name = (char *) malloc(sizeof(char) * 21);

    strcpy(si.name, "张三");
    si.age = 18;

    printf("%s   %d\n", si.name, si.age);

    free(si.name);


    system("pause");
    return EXIT_SUCCESS;
}