#include<iostream>

struct Car{
    std::string model;
    int year;
    std::string color;

};

void printCar(Car car);

int main() {
    Car car1;
    Car car2;

    car1.model="Mustang";
    car1.year=2023;
    car1.color="red";

    car2.model="yaris";
    car2.year=2022;
    car2.color="blue";

    printCar(car1);
    std::cout<<& car1<<'\n';
    return 0;

}
//struct creates a copy of car1 (pass by value). therefore change sthe original values
void printCar(Car car){

    std::cout<<&car<<'\n';
    std::cout<<car.model<<'\n';
    std::cout<<car.year<<'\n';
    std::cout<<car.color<<'\n';



}