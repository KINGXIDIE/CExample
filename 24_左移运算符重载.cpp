/**
  ******************************************************************************
  * @file           : 24_左移运算符重载.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/12/7
  ******************************************************************************
  */

#include <iostream>

using namespace std;

class Person {
public:
    // 利用成员函数重载运算符 p.operator(cout) -> p << cout
    // void operator<<(cout) {

    int m_a;
    int m_b;
};
ostream& operator<<(ostream &cout, Person &p) {
    cout << "m_a " << p.m_a << " m_b " << p.m_b;
    return cout;
}


void t1() {
    Person p1;
    p1.m_a = 10;
    p1.m_b = 20;
    cout << p1 << endl;
}

int main() {
    t1();
    return 0;
};
