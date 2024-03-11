/**
  ******************************************************************************
  * @file           : 16_初始化列表.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/27
  ******************************************************************************
  */

#include <iostream>

using namespace std;

class Person {
    int m_a;
    int m_b;
    int m_c;
    // 传统初始化
    //Person(int a, int b, int c) {
    //    m_a = a;
    //    m_b = b;
    //    m_c = c;
    //}
    // 初始化列表
    // Person(): m_a(10), m_b(20), m_c(30) {
    Person(int a, int b, int c): m_a(a), m_b(b), m_c(c) {

    }
};
void t1() {

}

int main() {
    t1();
    return 0;
};
