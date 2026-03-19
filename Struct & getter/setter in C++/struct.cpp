#include<iostream>
#include <string>

struct student{
    std::string name;
    double gpa;
    bool enrolled;

};

int main()
{
    student s1;
    s1.name="sam";
    s1.gpa=4;
    s1.enrolled=true;

    std::cout<<s1.name<< '\n';
    std::cout<<s1.gpa<<'\n';
    std::cout<<s1.enrolled<<'\n';

    return 0;


}