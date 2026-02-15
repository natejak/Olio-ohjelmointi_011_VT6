#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

#include "Student.h"

using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
            case 0:{
                // Kysy käyttäjältä uuden opiskelijan nimi ja ikä                      Ask the user for the new student's name and age
                // Lisää uusi student StudentList vektoriin.                           Add the new student to the StudentList vector

                string name;
                int age;

                cin.ignore();

                cout << "Please provide student name:" << endl;
                getline(cin, name);

                cout << "Please provide age of the student" << endl;
                cin >> age;

                Student s(name, age);
                studentList.push_back(s);

                cout << "INFO: ***** *** " <<"Student: " << name << ", age: "<< age << " - has been added to the vector!" << " ***** ***" << endl;

                break;
            }

            case 1:{
                // Tulosta StudentList vektorin kaikkien opiskelijoiden                Print the names of all students in the StudentList vector
                // nimet.

                cout << endl << "LIST OF STUDENTS:" << endl;
                cout << left << setw(40) << "Name" << "Age" << endl;

                for_each(studentList.begin(), studentList.end(), [](Student& s){
                    cout << left << setw(40) << s.getName() << s.getAge() << endl;
                });

                break;
            }

            case 2:{
                // Järjestä StudentList vektorin Student oliot nimen mukaan            Sort Student objects in StudentList by name
                // algoritmikirjaston sort funktion avulla                             using the algorithm library's sort function
                // ja tulosta printStudentInfo() funktion avulla järjestetyt           and print the sorted students
                // opiskelijat                                                         using the printStudentInfo() function
                break;
            }

            case 3:{
                // Järjestä StudentList vektorin Student oliot iän mukaan              Sort Student objects in StudentList by age
                // algoritmikirjaston sort funktion avulla                             using the algorithm library's sort function
                // ja tulosta printStudentInfo() funktion avulla järjestetyt           and print the sorted students
                // opiskelijat                                                         using the printStudentInfo() function
                break;
            }

            case 4:{
                // Kysy käyttäjältä opiskelijan nimi                                   Ask the user for a student's name
                // Etsi studentListan opiskelijoista algoritmikirjaston                Search students in studentList using
                // find_if funktion avulla löytyykö käyttäjän antamaa nimeä            the algorithm library's find_if function
                // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.              to check if the given name exists.
                //                                                                     If found, print the student's information.
                break;
            }

            default:{
                cout<< "Wrong selection, stopping..."<<endl;
                break;
            }
        }

    }while(selection < 5);


return 0;
}
