#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int id) : ID_(id){
    timeOfEntry = std::time(nullptr);
};

Vehicle::~Vehicle() = default;

int Vehicle::getID() const {
    return ID_;
}

int Vehicle::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    return static_cast<int>(std::difftime(now, timeOfEntry));
}


