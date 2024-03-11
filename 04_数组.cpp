/**
  ******************************************************************************
  * @file           : 04_数组.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/21
  ******************************************************************************
  */

#include <iostream>

using namespace std;

void t1() {
    // 1. arr[2];
    // 2. arr[2] = {1,2};
    // 3. arr[]  = {1,2...};
    int arr[2] = {1, 2};
    for (int i = 0; i < 2; i++) {
        cout << arr[i] << endl;
    }

    cout << "arr[]  size   = " << sizeof(arr) << endl;
    cout << "arr[i] size   = " << sizeof(arr[0]) << endl;
    cout << "arr    length = " << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "arr    *p     = " << (long)arr << endl;
    cout << "arr[0] *p     = " << (long)&arr[0] << endl;
}

void t2() {
    // 1. arr[2][4];
    // 2. arr[2][4] = {{1,2,3,4},{2,2,3,4}};
    // 3. arr[2][4] = {1,2,3,4,2,2,3,4};
    // 4. arr[][4] = {1,2,3,4,2,2,3,4};
};
int main() {
    t2();
    // cout << "hello" << endl;
    return 0;
};
