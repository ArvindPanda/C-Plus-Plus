#include <iostream>
using namespace std;

#include "car.cpp"

int main(){

    Car c1;

    c1.setChasisNumber(345454);
    c1.modelNumber = 23;
     c1.display();




    Car *c2 =new Car;


     (*c2).modelNumber = 34;
     c2 -> setChasisNumber(34983);
     c2 -> display();
}