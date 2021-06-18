//
// Created by mac on 2021/6/8.
//

#include "stdio.h"
#include <string.h>

void char1(){
    char str0[6] = { 'h', 'e', 'l', 'l', 'o', '\0'};

    char str2[] = "world";  //  == {'w', 'o', 'r', 'l', 'd', '\0'}

    printf("%s\n", str2);

    char str[10];

//    printf("获取的字符串为：%s", gets(str));
//    printf("获取的字符串为：%s", fgets(str, sizeof(str), stdin));

    int ret = puts(str2);	// puts("hello world");

    printf("ret = %d\n", ret);

    char str3[] = "hello\0world";

    printf("sizeof(str3) = %u\n", sizeof(str3));

    printf("strlen(str3) = %u\n", strlen(str3));
}

int main(){
    char1();
    return 1;
}