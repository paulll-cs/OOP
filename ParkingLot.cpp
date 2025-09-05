#include "ParkingLot.h"
#include "Vehicle.h"
#include <memory>
#include <vector>
#include <iostream>


ParkingLot::ParkingLot(int max_capacity): max_capacity_(max_capacity){};

ParkingLot::~ParkingLot() = default;

int ParkingLot::getCount(){
    return current_capacity;
}

void ParkingLot::parkVehicle(std::unique_ptr<Vehicle> vehicle){
    if (current_capacity + 1 > max_capacity_){
        std::cout<< "The lot is full";
    }else{
        current_capacity += 1;
        current_vehicles.push_back(std::move(vehicle));
    }
};


void ParkingLot::unparkVehicle(int id){
    bool found;

    for (int i = 0; i<current_capacity;i++){
        if (id == current_vehicles[i]->getID()){
            current_vehicles.erase(current_vehicles.begin() + i);
            found = true;
            break;
        }
        if(!found){
            std::cout<<"Vehicle not in lot";
        }
    }
};

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int overstay_count;
    for (int i = 0; i<current_capacity;i++){
        if (current_vehicles[i]->getParkingDuration()>maxParkingDuration){
            overstay_count+= 1;
        }
    }
    return overstay_count;
};