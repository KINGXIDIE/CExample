/**
  ******************************************************************************
  * @file           : 21_友元类.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/30
  ******************************************************************************
  */

#include <iostream>
#include <string>

using namespace std;

class Building;

class GoodGay {
public:
    GoodGay();
    void visit();
    Building* building;
};

class Building {
    friend class GoodGay;
public:
    Building();
    string m_SettingRoom;
private:
    string m_BedRoom;
};

Building::Building() {
    m_SettingRoom = "客厅";
    m_BedRoom = "卧室";
}
GoodGay::GoodGay() {
    building = new Building;
}
void GoodGay::visit() {
    cout << "gooGay inter: " << building->m_SettingRoom << endl;
    // class Building顶部添加 friend class GoodGay; 声明
    cout << "gooGay inter: " << building->m_BedRoom << endl;
}

void t1() {
    GoodGay goodGay;
    goodGay.visit();
}

int main() {
    t1();
    return 0;
};
