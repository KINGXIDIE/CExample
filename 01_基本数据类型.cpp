/**
  ******************************************************************************
  * @file           : 01.基本数据类型.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/20
  ******************************************************************************
  */
#include <iostream>
#include <string>

using namespace std;

/*
 * 浮点型（实型）
 * */
void test01 () {
    float f1 = 3.1415926f; // 4字节 7有效数字
    double f2 = 3.1415926; // 8字节 15-16有效数字
    // 默认情况下输出一个小数，会显示6位有效数字
    cout << "f1= " << f1 << "\n" << "f2= " << f2 << endl;

    float f3 = 3e2; // 3*10^2
    float f4 = 3e-2; // 3*0.1^2
    cout << "f3= " << f3 << "\n" << "f4= " << f4 << endl;
};

/*
 * 字符型
 * */
void test02() {
    // 语法 char ch = 'a'; 单引号内只能放一个字符
    cout << "char size = " << sizeof(char) << endl;

    // ASCII编码
    // a: 97
    // A: 65
    char ch_a = 'a';
    char ch_A = 'A';
    cout << "ch_a= " << (int)ch_a << endl;
    cout << "ch_A= " << (int)ch_A << endl;

};

/*
 * 转义字符
 * */
void test03() {
    // \n：换行符 010
    // \t：制表符 009
    // \r：回车符 013
    // \b：退格符 008
    // \f：换页符 012
    // \a：响铃符 007
    // \v：垂直制表符 011
};

/*
 * 字符串
 * */
void test04() {
    // C    char    ch[] = "zifuchuan";
    // C++  string  ch   = "zifuchuan";  #include <string>
    char ch[]  = "woshiygx";
    string str = "woshiygx";
    cout << "ch[]= " << ch << "\nstr= " << str << endl;
};

/*
 * 布尔
 * */
void test05() {
    bool bl1 = false;
    bool bl2 = true;
    cout << "bl1= " << bl1 << "\n(int)bl1= " << (int)bl1 << endl;
    cout << "bl2= " << bl2 << "\n(int)bl2= " << (int)bl2 << endl;
};

int main() {
    test05();
    return 0;
};
