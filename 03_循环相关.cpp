/**
  ******************************************************************************
  * @file           : 03_循环相关.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/20
  ******************************************************************************
  */

#include <iostream>

using namespace std;

/*
 * 9*9
 * */
void t1() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << "*" << i << "=" << j*i << "  ";
            // if(i == j) cout << "\t" << endl;
        }
        cout << endl;
    }
};

/*
 * goto 跳转
 * */
void t2() {
    goto FLAG;
    cout << "11111" << endl;
    cout << "22222" << endl;
    FLAG:
    cout << "33333" << endl;
}

int main() {
    t2();
    return 0;
};
