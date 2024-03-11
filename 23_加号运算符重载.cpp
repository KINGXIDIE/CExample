/**
  ******************************************************************************
  * @file           : 23_加号运算符重载.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/30
  ******************************************************************************
  */

#include <iostream>

using namespace std;

class Person {
public:
    // 1. 成员函数重载
    //Person operator+(Person &p) {
    //    Person temp;
    //    temp.m_A = this->m_A + p.m_A;
    //    temp.m_B = this->m_B + p.m_B;
    //    return temp;
    //}
    int m_A;
    int m_B;
};

// 1. 全局函数重载
Person operator+(Person &p1, Person &p2) {
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

void t1() {
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;

    // 成员函数本质 Person p3 = p1.operator+(p2);
    // 全局函数本质 Person p3 = operator+(p1, p2);
    Person p3 = p1 + p2;
    cout << p3.m_A << endl;
    cout << p3.m_B << endl;

}

int main() {
    t1();
    return 0;
};
