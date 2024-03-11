/**
  ******************************************************************************
  * @file           : 19_常函数.cpp
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
    int m_a;
    mutable int m_b;

    // this的指针本质 是指针常量 指针的指向不可修改
    // const Person * const this
    void showPerson() const {
        // this->m_a = 100; ...error
        this->m_b = 40; // 特殊变量，计时在常函数中，也可以修改这个值
    }
};

void t1() {
    Person p;
    p.showPerson();
}

int main() {
    t1();
    return 0;
};
