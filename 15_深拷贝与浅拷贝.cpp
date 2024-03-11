/**
  ******************************************************************************
  * @file           : 15_深拷贝与浅拷贝.cpp
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
    int m_age;
    int *m_height;
    Person() {
        cout << "Person 构造函数" << endl;
    }

    Person(int age, int height) {
        m_age = age;
        m_height = new int(height);
        cout << "有参 m_age: " << m_age << endl;
    }

    // 自己实现拷贝构造函数，解决浅拷贝带来的问题
    Person(const Person &p) {
        cout << "Person copy construct" << endl;
        m_age = p.m_age;
        // m_height = p.m_height; 编译器默认实现方式
        m_height = new int(*p.m_height);
    }

    ~Person() {
        // 浅拷贝会造成堆区内存重复释放
        if(m_height != NULL) {
            delete m_height;
            m_height = NULL;
        }
        cout << "Person 析构函数" << endl;
    }
};

void t1() {
    Person p1(18, 160);
    cout << "p1.age: " << p1.m_age << "  p1.height " << *p1.m_height << endl;
    Person p2(p1);
    cout << "p2.age: " << p2.m_age << "  p2.height " << *p2.m_height << endl;
}

int main() {
    t1();
    return 0;
};
