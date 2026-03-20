#include<iostream>



class Shape{
    public:
        double area;
        double volume;
};

class Cube:public Shape{
    public:
        double side;

    //constructor of Cube class    
    Cube(double side){
        this->side=side;
        this->area=side*side*6;
        this->volume=side*side*side;

    }
};

class sphere:public Shape{
    public:
        double radius;

    //constructor of Sphere class        
    sphere(double radius){
        this->radius=radius;
        this->area=4*3.14159*(radius*radius);
        this->volume=(4/3.0)*3.14159*(radius*radius*radius);

    }
};

//Parent class
class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout<<"this animal is eating \n";

    }

};
//child class derived from Animal class
class Dog : public Animal{

    public:
    void bark(){
        std::cout<<"the dog goes woof \n";

    }
};

class Cat : public Animal{

    public:
    void Meow(){
        std::cout<<"the cat goes meow \n";

    }
};

int main(){

    Cube cube(10.0);
    std::cout<<"area:"<<cube.area<<"cm\n";
    std::cout<<"volume:"<<cube.volume<<"cm\n";





    Dog dog;
    Cat cat;


    std::cout<<dog.alive<<'\n';
    dog.eat();
    dog.bark();
    cat.Meow();
    return 0;
}