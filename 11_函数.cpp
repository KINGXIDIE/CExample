/**
  ******************************************************************************
  * @file           : 11_函数.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/26
  ******************************************************************************
  */

#include <iostream>

using namespace std;

/**
 * @desc 函数的重载
 * 1. 同一个作用域下
 * 2. 函数名称相同
 * 3. 函数参数类型不同，个数不同，顺序不同
 * */
void fn() {
    cout << "null" << endl;
}
void fn(int a) {
    cout << a << endl;
}
void fn(int a, double b) {
    cout << a << " = int a, double b = " <<  b << endl;
}
void fn(double a, int b) {
    cout << a << " = int a, double b = " <<  b << endl;
}
//int fn(int a) { ... error
//    return a;
//}
void t1() {
    fn();
    fn(10);
    fn(10, 3.14);
    fn(5.14, 20);
}


int main() {
    t1();
    return 0;
};
