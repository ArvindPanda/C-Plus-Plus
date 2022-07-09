#include <iostream>
using namespace std;

#include "car.cpp"

int main(){

    Car c1;
    c1.chasisNumber= 73483;
    c1.modelNumber= 24;

   Car *c2 =new Car;
   
   (*c2).chasisNumber= 8457;
   c2 -> modelNumber = 34;
   
   

}
