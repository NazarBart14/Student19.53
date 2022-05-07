#include <string.h>
#include <iostream>


using namespace std;


class Student
{
public:
    Student() { cout << ">Name: Nazar<" << endl; cout << ">Surname: Bartoshuk<" << endl; cout << ">Date of birth: 06.02.2007<" << endl; cout << ">Nomer school: 006583659<" << endl; }
    ~Student() {}

};

class StudentDefense : public Student
{
public:
    StudentDefense() { cout << ">I'm preparing for defense candidate work <" << endl; }
    ~StudentDefense() {}
};
StudentDefense* th = new StudentDefense();

int main()
{

    class Student {}; // Базовий клас

    class  StudentDefense : public Student {}; // Public-успадкування

}

