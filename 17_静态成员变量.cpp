/**
  ******************************************************************************
  * @file           : 17_静态成员变量.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/28
  ******************************************************************************
  */

#include <iostream>

using namespace std;

/*
 * 1.静态成员变量：
 *     所有对象共享同一份数据
 *     在编译阶段分配内存
 *     类内声明，类外初始化
 * 2.静态成员函数
 *     所有对象共享同一个函数
 *     静态成员函数只能访问静态成员变量
 *
 * */

class Person {

public:
    static int m_a;
    static void func() {
        cout << "use static func ..." << endl;
    }
private:
    static int m_b;
    static void func2() {
        cout << "use static func2 ..." << endl;
    }
};

int Person::m_a = 100; // 类外初始化
int Person::m_b = 50;
void t1() {
    Person p;
    cout << p.m_a << endl;

    Person p2;
    p2.m_a = 200;
    cout << p.m_a << endl;


    // cout << p.m_b << endl; ...error
}

void t2() {
    Person p;
    // 1.
    p.func();
    // 2.
    Person::func();

    // private
    // p.func1(); ...error
}

int main() {
    t2();
    return 0;
};
