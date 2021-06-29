//
// Created by mac on 2021/6/27.
//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main(){
     int g_a;
    cout<<g_a<<endl;
    return EXIT_SUCCESS;
}

//C++下const修饰全局变量默认是内部链接属性
//int main(){
//    extern const int g_b;
//    cout << "g_b = " << g_b << endl;;
//    return EXIT_SUCCESS;
//}