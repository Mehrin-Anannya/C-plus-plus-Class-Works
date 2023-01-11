#include <iostream>
#include"Car.h"
using namespace std;
int main(){
    Car car;
    car.speed = 100;
    car.capacity = 1111;
    cout<<"Car's Speed: " <<car.speedUp(101)
    << "\nCar Capacity" <<car.chasisNumber<< endl;
return 0;
}