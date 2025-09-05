#include "Car.h"

int Car::getParkingDuration() const{
    return Vehicle::getParkingDuration()*0.9;
}