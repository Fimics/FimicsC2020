//
// Created by mac on 2021/6/13.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// strcpy
int strcpyTest(void)
{
    char src[] = "abc efg  zhansan wangwu ";
    char dest[10] = {0};

    char *p = strcpy(dest, src); ;// 字符串src 拷贝给dest

    printf("p= %s\n", p);
    printf("dest = %s\n", dest);

    system("pause");
    return EXIT_SUCCESS;
}
// strncpy
int main(void)
{
    char src[] = "hello world";
    char dest[100] = { 0 };

    char *p = strncpy(dest, src, 100); ;// 字符串src 拷贝给dest
    for (size_t i = 0; i < 10; i++)
    {
        printf("%c\n", p[i]);
    }

    printf("p= %s\n", p);
    printf("dest = %s\n", dest);

    system("pause");
    return EXIT_SUCCESS;
}
