//
// Created by mac on 2021/6/14.
//
#include "stdio.h"
#include "stdlib.h"
#include "Constant.h"
#include "string.h"


int main(){

    char * path = getPath("test.txt");

    FILE *fp = NULL;
    fp = fopen(path,"w");
    if(fp==NULL){
        perror("fopen errot");
        getchar();
        return -1;
    }

    fclose(fp);
    printf("-------- finish\n");
    return 1;
}
