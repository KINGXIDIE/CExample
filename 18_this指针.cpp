/**
  ******************************************************************************
  * @file           : 18_this指针.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/28
  ******************************************************************************
  */

#include <iostream>

using namespace std;

class Person {
    int m_a; // 非静态成员 属于类的对象上
    static int m_b; // 静态成员变量 不属于类对象上
    void func() {}; // 非静态成员函数 不属于类对象上
    static void func1() {}; // 静态成员函数 不属于类对象上
};
int Person::m_b = 10;

void t1() {
    //class Person {
    //};
    // Person p;
    // cout << sizeof(p) << endl;
    // 空对象占用内存地址：1
    // C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存地址
}

void t2() {
     Person p;
     cout << sizeof(p) << endl;
}

class Person2 {
public:
    // int m_age;
    int age;

    Person2(int age) {
        // m_age = age; 命名规范 m_attr 或者使用指针赋值
        this->age = age; // this指针指向被调用的成员函数所属的对象
    }

    void addAge(Person2 &p) {
        this->age += p.age;
    }
    Person2& addAgeNew(Person2 &p) {
        this->age += p.age;
        return *this;
    }
};
void t3() {
    Person2 p1(10);
    Person2 p2(10);
    p2.addAge(p1);
    cout << "p2.age = " << p2.age << endl;

    p2.addAgeNew(p1).addAgeNew(p1).addAgeNew(p1);
    cout << "p2.age = " << p2.age << endl;
}

int main() {
    t3();
    return 0;
};
