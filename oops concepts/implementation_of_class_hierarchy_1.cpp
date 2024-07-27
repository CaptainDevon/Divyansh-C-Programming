#include <iostream>
using namespace std;
class person
{
public:
    virtual void display()
    {
        cout << "hello I am a person" << endl;
    }
    void reply()
    {
        cout << "hello I am a person but i am not a virtual guy!" << endl;
    }
};

class student : public person
{
public:
    void student_print()
    {
        cout << "hello I am a student" << endl;
    }
};
class undergrad : public student
{
public:
    void undergrad_print()
    {
        cout << "hello I am an undergrad student" << endl;
    }
};
class gradstudent : public student
{
public:
    void gradstudent_print()
    {
        cout << "hello I am a gradstudent" << endl;
    }
};

class faculty : public person
{
public:
    void faculty_print()
    {
        cout << "hello I am a faculty" << endl;
    }
};

class staff : public person
{
public:
    void staff_print()
    {
        cout << "hello I am the member of staff" << endl;
    }
};
class administrator : public faculty
{
public:
    void administrator_print()
    {
        cout << "hi! I am the member of the administrators" << endl;
    }
};
class secratory : public staff
{
public:
    void secratory_print()
    {
        cout << "hi! I am the secratory" << endl;
    }
};
class maintenance : public staff
{
public:
    void maintanance_print()
    {
        cout << "hi! I am the member of the maintenance team" << endl;
    }
};

int main()
{
    student s;
    cout << "displayed from student class----------------------------------------" << endl;
    s.display();
    s.reply();
    s.student_print();
    cout << "displayed from undergrad class----------------------------------------" << endl;
    undergrad u;
    u.display();
    u.reply();
    u.student_print();
    u.undergrad_print();
    cout << "displayed from gradstudent class----------------------------------------" << endl;
    gradstudent gs;
    gs.display();
    gs.gradstudent_print();
    gs.reply();
    gs.student_print();
    cout << "displayed from faculty class----------------------------------------" << endl;
    faculty f;
    f.display();
    f.faculty_print();
    f.reply();
    cout << "displayed from staff class----------------------------------------" << endl;
    staff stf;
    stf.display();
    stf.staff_print();
    stf.reply();
    cout << "displayed from the administrator class----------------------------------------" << endl;
    administrator a;
    a.administrator_print();
    a.display();
    a.faculty_print();
    a.reply();
    cout << "displayed from the secratory class----------------------------------------" << endl;
    secratory sec;
    sec.display();
    sec.reply();
    sec.secratory_print();
    sec.staff_print();
    cout << "display from maintenance class----------------------------------------" << endl;
    maintenance m;
    m.display();
    m.maintanance_print();
    m.reply();
    m.staff_print();

    return 0;
}