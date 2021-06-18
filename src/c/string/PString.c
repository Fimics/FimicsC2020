//
// Created by mac on 2021/6/12.
//

/**
* 指针和字符串

*/

#include "stdio.h"

int main(void)
{
    char str1[] = "hello";		// {'h',, 'e', 'l', 'l', 'o', '\0'}
    char m[] = "hello";

    char *str2 = "hello";		// "hello" 是一个字符串常量, 不能修改。
    char *n = "hello";

    str1[0] = 'R';
//    str2[0] = 'R';

    printf("str1 = %p\n", str1);
    printf("m = %p\n", m);

    printf("str2 = %p\n", str2);
    printf("n = %p\n", n);

    return 1;
}