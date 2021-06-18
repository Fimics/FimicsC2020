//
// Created by mac on 2021/6/16.
//

#include "stdio.h"
#include "string.h"
#include "Constant.h"
#include "stdlib.h"

const char *FILE_DIR = "/Users/mac/code/c/FimicsC2020/src/c/file/res/";

char *getPath(char *file_name) {
//    char *pwd = system("pwd");
//    printf("pwd %c\n", *pwd);
    char *path = malloc(sizeof(char) * 100);
    path = strcat(strcat(path, FILE_DIR), file_name);
    printf("path = %c\n", *path);
    return path;
}