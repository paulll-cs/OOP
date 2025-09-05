#include "Bus.h"

int Bus::getParkingDuration() const {
    return Vehicle::getParkingDuration()*0.75;
}