//
// Created by mac on 2021/6/14.
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "Constant.h"

int putc1() {
    char *filename = getPath("putc1.txt");

    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("fopen error");
        return -1;
    }

    int ret = fputc('A', fp);

    printf("ret = %d\n", ret);

//    char * pwd = system("pwd");
//    printf("pwd %c\n",pwd);

    fclose(fp);
    printf("---------------finish\n");

    return EXIT_SUCCESS;
}

int putc2() {
    char *filename = getPath("putc2.txt");
    int ret = 0;

    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("fopen error");
        return -1;
    }
    char ch = 'a';

    while (ch <= 'z') {
        ret = fputc(ch, fp);
        if (ret == -1) {
            perror("fputc eror");
            return -1;
        }
        ch++;
    }

    return EXIT_SUCCESS;
}


int putc3() {
    char *buf = "abcdefghijklmnopqrstuvwxyz";

    char *filename = getPath("putc3.txt");
    int ret = 0;

    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("fopen error");
        return -1;
    }
    int n = strlen(buf);
    for (size_t i = 0; i < n; i++) {
        ret = fputc(buf[i], fp);
        if (ret == -1) {
            perror("fputc eror");
            return -1;
        }
    }
    fclose(fp);

    return EXIT_SUCCESS;
}

int main() {
//    putc1();
//putc2();
    putc3();
    return 1;
}




