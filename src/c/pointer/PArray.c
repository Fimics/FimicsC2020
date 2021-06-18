//
// Created by mac on 2021/6/10.
//

#include <stdio.h>
#include <time.h>

/**
 * 数组与指针
 */

void pArray() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int *p = a;
//    printf("sizeof(a) =%u\n",sizeof(a));
//    printf("sizeof(p) = %u\n", sizeof(p));

    for (int i = 0; i < n; i++) {
//        printf("a[%d]=%d ,", i,a[i]);
//        printf("%d ", *(a+i));  // a[i] == *(a+i)
//        printf("%d ", p[i]);
        printf("%d ", *(p + i));  // p[i] = *(p+i)
    }

}

// 使用指针++操作数组元素
void pArray1() {
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 9, 0};
    int *p = arr;
    int n = sizeof(arr) / sizeof(arr[0]);
//    printf("first p = %p\n", p);

//    for(int i = 0;i<n;i++){
//        printf("i=%d ,%d ,",i,*p);
//        p++;// p = p+1;   一次加过一个int大小。 一个元素。
//    }

    for (size_t i = 0; i < n; i++) {
        *(p + i) = 10 + i;  //*(p + i) == arr[i]
    }// p 指向数组的首地址。

    for (int j = 0; j < n; j++) {
        printf("a[%d]=%d  ,", j, arr[j]);
    }

    printf("\n");

    for (size_t i = 0; i < n; i++) {
        printf("%d ", *p);
        p++;
    }  // p指针指向一块无效的内存区域，p为 野指针。
}

// 指针数组1
void pArray2() {
    int a = 1;
    int b = 2;
    int c = 3;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    int *arr[] = {p1, p2, p3};  // 整型指针数组arr， 存的都是整型地址。

    printf("*(arr[0]) = %d\n", *(*(arr + 0)));  //arr[0] ==  *(arr+0)

    printf("*(arr[0]) = %d\n", **arr);


}

// 指针数组2
void pArray3() {
    int a[] = {10};
    int b[] = {20};
    int c[] = {30};

    int *arr[] = {a, b, c};  // 整型指针数组arr， 存的都是整型地址。

    printf("*(arr[0]) = %d\n", *(*(arr + 0)));  //arr[0] ==  *(arr+0)

    printf("*(arr[0]) = %d\n", **arr);
}



int main() {
//    pArray();
//    pArray1();
//    pArray2();
    pArray3();
    return 1;
}