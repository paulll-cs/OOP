#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include <vector>
#include <memory>

class ParkingLot{
    private:
        int max_capacity_;
        int current_capacity;
        std::vector<std::unique_ptr<Vehicle>> current_vehicles;

    public:
        ParkingLot(int max_capacity);
        ~ParkingLot();

        int getCount();
        void parkVehicle(std::unique_ptr<Vehicle> vehicle);
        void unparkVehicle(int id);

};

#endif