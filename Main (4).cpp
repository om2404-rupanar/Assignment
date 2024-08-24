#include <iostream>
#include <string>
using namespace std;

class Car {
  
  public:
  
  string brand;
  string model;
  
  int year;

};

int main() {
  //Creat an object of Car
  Car carObj1;
  carObj1.brand = "Ferrari";
  carObj1.model = "8 12";
  carObj1.year = 2017;
  
  // Creat another object of car
  Car carObj2;
  carObj2.brand = "Volo";
  carObj2.model = "XC90";
  carObj2.year = 2002;
  
  
  //print attribute values
  cout<<carObj1.brand<<""<<carObj1.model<<""<<carObj1.year<<"\n";
  cout<<carObj2.brand<<""<<carObj2.model<<""<<carObj2.year<<"\n";
  
  return 0;
  

}