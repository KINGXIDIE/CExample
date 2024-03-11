/**
  ******************************************************************************
  * @file           : 07_指针.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/21
  ******************************************************************************
  */

#include <iostream>

using namespace std;

void t1() {
    // 空指针：指针变量指向内存中编号位0的指针 - 不可访问
    // int *p=NULL; *p=100; error

    // 野指针：指针指向非法的内存空间

    /**
     * + const修饰指针
     * -- 1. const修饰指针 常量指针
     * -- 2. const修饰常量 指针常量
     * -- 3. const既修饰指针又修饰常量
     * */
    int a = 10;
    int b = 20;

    const int* p1 = &a;
    // *p1 = 100; error
    p1 = &b;
    cout << "*p1: " << *p1 << endl;

    int* const p2 = &a;
    *p2 = 30;
    // p2 = &b; error
    cout << "*p2: " << *p2 << endl;

    const int* const p3 = &a;
    // *p3 = 20; error
    // p3 = &b; error
    cout << "*p3: " << *p3 << endl;

};

void t2() {
    int arr[] = {1,2,3,4,5,6,7};
    int *p = arr;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << "*p " << *(p++) << endl;
    }
};

void t4(int* a) {
    *a = 10;
}
void t3() {
    int b = 1;
    t4(&b);
    cout << "b= " << b << endl;
}


int main() {
    t3();
    // cout << "hello" << endl;
    return 0;
};
