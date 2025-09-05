#include "Vehicle.h"
#include "Car.h"
int Car::getParkingDuration() const {
    return Vehicle::getParkingDuration()*0.75;
};