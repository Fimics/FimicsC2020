//
// Created by mac on 2021/6/7.
//

#include "stdio.h"

//1
void testChar() {
    putchar(97);
    putchar('a');
    printf("\n");

    char str[] = "hello world";
    printf("str=|%-15s|\n", str);

    char ch = 'a';
    printf("ch=%c\n", ch);

    char str2[20] = "hello world";
    printf("str2=%s\n", str2);
}

//2
void testScanf() {
    int a;
    scanf("%d",&a);
    printf("a=%d\n",a);

    char ch;

    ch = getchar();		// 接收用户输入，返回接收到的ASCII码

    printf("ch = %c\n", ch);

    putchar(ch);
    putchar('\n');
}

int main() {
//    testChar();
//    testScanf();
    return 0;
}