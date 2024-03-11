/**
  ******************************************************************************
  * @file           : 29_继承.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2024/2/28
  ******************************************************************************
  */

#include <iostream>

using namespace std;

// 继承的语法 class 子类 ： 继承方式 父类
class Base {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1 : public Base {
public:
    void func() {
        m_A = 10; // 父类中的公共权限 子类依然是公共权限
        m_B = 10; // 父类中的保护权限 子类依然是保护权限
        // m_C = 10; // 父类私有权限 子类无法访问
    }
};

class Son2 : protected Base {
public:
    void func() {
        m_A = 10; // 父类中的公共权限 子类依然是保护权限
        m_B = 10; // 父类中的保护权限 子类依然是保护权限
        // m_C = 10; // 父类私有权限 子类无法访问
    }
};

class Son3 : private Base {
public:
    void func() {
        m_A = 10; // 父类中的公共权限 子类依然是私有权限
        m_B = 10; // 父类中的保护权限 子类依然是私有权限
        // m_C = 10; // 父类私有权限 子类无法访问
    }
};

class GrandSon3 : public Son3 {
public:
    void func() {
        // m_A = 10; // Son3私有，访问不到
        // m_B = 10; // Son3私有，访问不到
    }
};


/*
 * 继承中的对象模型
 * */
class BaseFather {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son : public BaseFather {
    int m_D;
};

void t1() {
    // 16
    // 父类中所有非静态成员属性都会被子类继承
    // 父类中私有成员属性 是被编译器给隐藏了， 因此访问不到
    cout << "size of Son: " << sizeof(Son) << endl;
}

int main() {
    t1();
    return 0;
};
