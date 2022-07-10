#include <iostream>
using namespace std;

#include "car.cpp"

int main(){

    Car c1;
   // c1.chasisNumber= 73483;
    c1.modelNumber= 24;
    c1.display();
    cout << "C1 chasisNumber " << c1.getChasisNumber()<< endl;
    cout << "C1 modelNumber " << c1.modelNumber<< endl;
    

   Car *c2 =new Car;
   
   //(*c2).chasisNumber= 8457;
   c2 -> modelNumber = 34;
   
   (*c2).display();
   
   c2 -> display();
   
   cout << "C2 chasisNumber " << (*c2).getChasisNumber()<< endl;
    cout << "C2 modelNumber " << c2 -> modelNumber<< endl;
   
   
   
   
   

}
