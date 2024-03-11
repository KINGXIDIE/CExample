/**
  ******************************************************************************
  * @file           : 14_拷贝构造函数.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/27
  ******************************************************************************
  */

#include <iostream>

using namespace std;

class Person {
public:
    Person() {
        cout << "Person 构造函数" << endl;
    }
    ~Person() {
        cout << "Person 析构函数" << endl;
    }
    Person(int age) {
        m_age = age;
        cout << "有参 m_age: " << m_age << endl;
    }
    Person(const Person &p) {
        m_age = p.m_age;
        cout << "拷贝 m_age: " << m_age << endl;
    }
    int m_age;
};

void t1() {
    Person p1(20);
    Person p2(p1);
}

void doWork(Person p) {
    cout << "调用了 doWork" << endl;
}
void t2() {
    Person p;
    doWork(p);
}

Person doWork2() {
    Person p(10);
    cout << (int*)&p << endl;
    return p;
}
void t3() {
    Person p = doWork2();
    cout << (int*)&p << endl;
}

int main() {
    t3();
    return 0;
};
