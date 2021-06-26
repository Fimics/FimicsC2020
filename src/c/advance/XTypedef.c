//
// Created by mac on 2021/6/18.
//

#include<stdio.h>   //标准   i input 输入   o  output  输出
#include<string.h>  //对字符串处理  strcat strstr strcmp strcpy
#include<stdlib.h>  //malloc   free

//1.typedef 使用 可以简化 struct关键字
//struct Person{
//    char name[64];
//    int age;
//};

// 语法: typedef 原名， 别名
//typedef struct Person myPerson;


typedef struct Person{
    char name[64];
    int age;
} myPerson;

void test(){
    struct Person ={"a",10};
    myPerson p2 = {"b",5};
}


//2.区分数据类型
void test2(){
    typedef char * PCHAR;
    PCHAR p1,p2; //char *p1,*p2
//    printf("p1的数据类型为： %s\n", typeid(p1).name());
//    printf("p2的数据类型为： %s\n", typeid(p2).name());

}

//3.提高移植性
typedef int MYINT;
void test3(){
    MYINT  a = 10;
    MYINT  b = 20;
}

int main(){
    test2();
    return 1;
}