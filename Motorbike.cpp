#include "Vehicle.h"
#include "Motorbike.h"

Motorbike::Motorbike(int id): Vehicle(id){};

int Motorbike::getParkingDuration() const {
    return Vehicle::getParkingDuration()*0.75;
};