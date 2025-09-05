#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include <vector>
#include <memory> 

int main() {
    int numVehicles;
    std::cout << "Enter number of vehicles to park: ";
    std::cin >> numVehicles;

    std::vector<std::unique_ptr<Vehicle>> parkingLot;

    for (int i = 0; i < numVehicles; i++) {
        int id;
        std::string type;
        std::cout << "\nSelect vehicle type for vehicle " << (i + 1) << ":\n";
        std::cout << "1. Car\n2. Bus\n3. Motorbike\nChoice: ";
        std::cin >> type;
        std::cout << "Enter vehicle ID: ";
        std::cin >> id;

        if (type == "Car") {
            parkingLot.push_back(std::make_unique<Car>(id));
        } else if (type == "Bus") {
            parkingLot.push_back(std::make_unique<Bus>(id));
        } else if (type == "Motorbike") {
            parkingLot.push_back(std::make_unique<Motorbike>(id));
        } else {
            std::cout << "Invalid type. Skipping.\n";
        }
    }


    std::cout << "\nParking durations:\n";
    for (const auto& vehicle : parkingLot) {
        std::cout << "Vehicle ID " << vehicle->getID()
                  << " has been parked for " << vehicle->getParkingDuration()
                  << " seconds.\n";
    }

    return 0;
}