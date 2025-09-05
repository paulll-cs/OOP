#include "Vehicle.h"
#include "Bus.h"

Bus::Bus(int id): Vehicle(id){};

int Bus::getParkingDuration() const {
    return Vehicle::getParkingDuration()*0.75;
};