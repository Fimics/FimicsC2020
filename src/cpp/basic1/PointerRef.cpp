//
// Created by mac on 2021/6/27.
//

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct Person
{
    int age;
};

void allocateSpace(Person ** p)
{
    //p指向指针的指针    *p  指针 指向的是person 本体   **p  person本体
    *p = (Person *)malloc(sizeof(Person));
    (*p)->age = 10;

}

void test01()
{
    Person * p = NULL;
    allocateSpace(&p);

    cout << "p.age = " << p->age <<  endl;
}



void allocateSpace2(Person* &pp) // Person * &pp = p;
{
    pp = (Person *)malloc(sizeof(Person));
    pp->age = 20;
}

void test02()
{
    Person *p = NULL;
    allocateSpace2(p);
    cout << "p.age = " << p->age << endl;
}

int main(){

    //test01();
    test02();
    system("pause");
    return EXIT_SUCCESS;
}