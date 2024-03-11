/**
  ******************************************************************************
  * @file           : 10_引用.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/24
  ******************************************************************************
  */

#include <iostream>

using namespace std;

void t1() {
    int a = 10;
    int &b = a; // 必须初始化，初始化后不可改变
    cout << a << endl;
    cout << b << endl;
}

int& return_data() {
    static int a = 10;
    return a;
}
void t2() {
    int &b = return_data();
    cout << b << endl;

    return_data() = 100;
    cout << b << endl;

    b = 90;
    cout << b << endl;
}

/*
 * 引用的本质
 * */
void t3() {
    int a = 10;

    // 内部自动转换为 int* const ref = &a;
    int &ref = a;
    ref = 20; //  *ref = 20;

}

int main() {
    t2();
    return 0;
};
