/**
  ******************************************************************************
  * @file           : 08_结构体.cpp
  * @author         : yinguanxi
  * @brief          : None
  * @attention      : None
  * @date           : 2023/11/24
  ******************************************************************************
  */

#include <iostream>

using namespace std;
struct Student {
    string name;
    int age;
    int score;
};

void t1() {
    struct Student {
        string name;
        int age;
        int score;
    }s3;

    // 1.
    struct Student s1;
    s1.name = "ygx";
    s1.age = 18;
    s1.score = 99;

    // 2.
    struct Student s2 = {"yyy", 20, 100};

    // 3.
    s3.name = "xxx";
    s3.age = 19;
    s3.score = 99;

    cout << "s1.name " << s1.name << " s1.age " << s1.age << endl;
    cout << "s2.name " << s2.name << " s2.age " << s2.age << endl;
    cout << "s3.name " << s3.name << " s3.age " << s3.age << endl;

};

/*
 * 结构体数组
 * */
void t2() {
    struct Student {
        string name;
        int age;
        int score;
    };
    struct Student stuArr[2] = {
        {"ygx", 19, 99},
        {"gxx", 20, 100},
    };

    for (int i = 0; i < sizeof(stuArr)/sizeof(stuArr[0]); i++) {
        cout << stuArr[i].name<< " "
             << stuArr[i].age << " "
             << stuArr[i].score << endl;
    }
}

void t3() {
    struct Student {
        string name;
        int age;
        int score;
    };
    Student stu = {"ygx", 20, 100};
    Student* p = &stu;
    cout << p->name<< " "
         << p->age << " "
         << p->score << endl;
}


void print(struct Student s) {
    cout << s.name << endl;
}
void print2(struct Student* s) {
    s->name = "yinguanxi";
    cout << s->name << endl;
}
void print3(const struct Student* s) {
    // s->name = "yinguanxi"; error
    cout << s->name << endl;
}
void t4() {
    Student s1 = {"ygx", 19, 99};
    print(s1);
    print2(&s1);
}



int main() {
    t4();
    return 0;
};
