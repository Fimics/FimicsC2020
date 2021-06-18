//
// Created by mac on 2021/6/13.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int strcmp1(void)
{
    char *str1 = "helloworld";
    char *str2 = "helloz";

    printf("ret = %d\n", strcmp(str1, str2));

    system("pause");
    return EXIT_SUCCESS;
}

int main(void)
{
    char *str1 = "helloworld";
    char *str2 = "helloz";

    printf("ret = %d\n", strncmp(str1, str2, 8));

    system("pause");
    return EXIT_SUCCESS;
}

