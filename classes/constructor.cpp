#include<iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std:: string name, int age, double gpa){
        this->name=name;
        this->age=age;
        this->gpa=gpa;


    }
};

int main(){
    Student s1("sam",25,3.2);
    std::cout<<s1.name<<'\n';
    std::cout<<s1.age<<'\n';
    std::cout<<s1.gpa<<'\n';

}