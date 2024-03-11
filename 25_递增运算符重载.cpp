/**
  ******************************************************************************
  * @file           : 25_递增运算符重载.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2024/2/25
  ******************************************************************************
  */

#include <iostream>

using namespace std;

class MyInteger {
friend ostream& operator<<(ostream& cout, MyInteger myInt);
public:
    MyInteger() {
        m_Num = 0;
    }
    // 重载前置++ 返回引用是为了一直对一个数据进行递增操作
    MyInteger& operator++() {
        m_Num++;
        return *this;
    }

    // 重载后置++ int代表占位参数，可以用于区分前置、后置
    MyInteger operator++(int) {
        // 先记录当前结果
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }

private:
    int m_Num;
};

// 重载左移运算符
ostream& operator<<(ostream& cout, MyInteger myInt) {
    cout << myInt.m_Num;
    return cout;
}

void t1() {
    MyInteger myInt;
    cout << ++myInt <<endl;
}

void t2() {
    MyInteger myInt;
    cout << myInt++ << endl;
    cout << myInt << endl;
}

int main() {
    t1();
    return 0;
};
