/**
  ******************************************************************************
  * @file           : 02_数据的输入.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/20
  ******************************************************************************
  */
#include <iostream>
#include <string>

using namespace std;

void test01() {

    int a = 0;
    cout << "请输入a的值:" << endl;
    cin >> a;
    cout << "整型变量a = " << a << endl;

    cout << "\n" << endl;

    float f = 3.14f;
    cout << "请输入f的值:" << endl;
    cin >> f;
    cout << "float变量f = " << f << endl;

    cout << "\n" << endl;

    char ch = 'a';
    cout << "请输入ch的值:" << endl;
    cin >> ch;
    cout << "char变量ch = " << ch << endl;

    cout << "\n" << endl;

    string str = "asd";
    cout << "请输入str的值:" << endl;
    cin >> str;
    cout << "string变量str = " << str << endl;

    cout << "\n" << endl;

    bool bl = false;
    cout << "请输入bl的值:" << endl;
    cin >> bl;
    cout << "bool变量bl = " << bl << endl;
}

int main() {
    test01();
    return 0;
};