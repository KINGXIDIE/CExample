/**
  ******************************************************************************
  * @file           : 22_友元成员函数.cpp
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
    void visit2();
    Building* building;
};

class Building {
    friend void GoodGay::visit2();
public:
    Building();
public:
    string m_SettingRoom;
private:
    string m_BedRoom;
};

Building::Building() {
    m_BedRoom = "卧室";
    m_SettingRoom = "客厅";
}
GoodGay::GoodGay() {
    building = new Building;
}

void GoodGay::visit() {
    cout << "good inter: " << building->m_SettingRoom << endl;
};
void GoodGay::visit2() {
    // friend void GoodGay::visit2();
    cout << "good inter: " << building->m_BedRoom << endl;
};
void t1() {
    GoodGay goodGay;
    goodGay.visit();
    goodGay.visit2();
}

int main() {
    t1();
    return 0;
};
