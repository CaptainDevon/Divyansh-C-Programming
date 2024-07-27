#include <iostream>
#include <string>
using namespace std;

struct student_info
{
    string regno;
    string name;
    int age;
    char section;
    
};

int main()
{
    struct student_info student1;
    cout<<"Registration number:";
    cin>>student1.regno;
    cout<<"Name:";
    cin>>student1.name;
    cout<<"age:";
    cin>>student1.age;
    cout<<"section:";
    cin>>student1.section;

    
    return 0;
}
