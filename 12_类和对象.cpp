/**
  ******************************************************************************
  * @file           : 12_类和对象.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/26
  ******************************************************************************
  */

#include <iostream>

using namespace std;

const double PI = 3.12;


/*
 * public    公共权限 类内可以访问，类外可以访问
 * protected 保护权限 类内可以访问，类外不可以访问，儿子可以访问
 * private   私有权限 类内可以访问，类外不可以访问，儿子不可以访问
 * */
class Circle {
public: // 公共权限
    int m_r; // 半径
    // 周长
    double calculateZC() {
        return 2 * PI * m_r;
    }
    // set 半径
    void set_m_r(int num) {
        m_r = num;
    }
};

void t1() {
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长为： " << c1.calculateZC() << endl;
    c1.set_m_r(20);
    cout << "圆的周长为： " << c1.calculateZC() << endl;
}


class Person {
public:
    string m_name;
protected:
    string m_car;
private:
    int m_password;
public:
    void set_data() {
        m_name = "ygx";
        m_car = "ben_chi";
        m_password = 333999;
    }
};

void t2() {
    Person p1;
    p1.set_data();
    cout << p1.m_name << endl;
    // cout << p1.m_car << endl;      ...error
    // cout << p1.m_password << endl; ...error
}

int main() {
    t2();
    return 0;
};
