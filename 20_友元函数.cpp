/**
  ******************************************************************************
  * @file           : 20_友元函数.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/30
  ******************************************************************************
  */

#include <iostream>

using namespace std;

class Building {
    friend void goodGay(Building* building);
public:
    string m_SettingRoom;
    Building() {
        m_SettingRoom = "客厅";
        m_BedRoom = "卧室";
    }
private:
    string m_BedRoom;
};

void goodGay(Building* building) {
    cout << "gooGay inter: " << building->m_SettingRoom << endl;

    // 在类最上方声明本函数后
    cout << "gooGay inter: " << building->m_BedRoom << endl;
}
void t1() {
    Building building;
    goodGay(&building);
}

int main() {
    t1();
    return 0;
};
