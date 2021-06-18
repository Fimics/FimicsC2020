//
// Created by mac on 2021/6/17.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "Constant.h"

int main(void)
{
    char *path = getPath("fgetsfputs.txt");
    FILE *fp = fopen(path, "w");
    if (fp == NULL)
    {
        perror("fopen error");
        return -1;
    }
    char buf[4096] = {0};

    while (1)
    {
        fgets(buf, 4096, stdin);
        if (strcmp(buf, ":wq\n") == 0)
        {
            break;
        }
        fputs(buf, fp);
    }

    fclose(fp);

    return EXIT_SUCCESS;
}
