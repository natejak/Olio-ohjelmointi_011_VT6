#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student {

    private:
    string name;
    int age;

    public:
    Student(string n, int a){
        name = n;
        age = a;
    }

    void setName(string n){
        name = n;
    }

    void setAge(int a){
        age = a;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    void printStudentInfo(){
        cout << "STUDENT INFO: " << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "===================" << endl;
    }

};


#endif // STUDENT_H
