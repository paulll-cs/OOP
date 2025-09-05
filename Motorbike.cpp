#include "Vehicle.h"
#include "Motorbike.h"

int Motorbike::getParkingDuration() const {
    return Vehicle::getParkingDuration()*0.75;
};