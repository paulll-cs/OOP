#include "Vehicle.h"
#include "Car.h"

Car::Car(int id): Vehicle(id){};

int Car::getParkingDuration() const {
    return Vehicle::getParkingDuration()*0.75;
};