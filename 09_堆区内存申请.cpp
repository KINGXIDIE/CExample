/**
  ******************************************************************************
  * @file           : 09_堆区内存申请.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/24
  ******************************************************************************
  */

#include <iostream>

using namespace std;


int*  point_apply() {
    int *p = new int(10); // 动态申请内存
    return p;
}
void t1() {
    int *p = point_apply();
    cout << *p << endl;
    delete p; // 释放内存
}

void t2() {
    int* arr = new int[10]; // 10代表10个元素
    for (int i = 0; i < 10; i++) {
        arr[i] = i * 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    delete[] arr; // 释放堆数组
}

int main() {
    t2();
    return 0;
};
