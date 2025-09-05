#include <iostream>
#include <memory>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10); 

    std::cout << "Parking vehicles until the lot is full...\n";

    while (lot.getCount() < 10) {
        int id;
        std::string type;
        std::cout << "\nSelect vehicle type to park:\n";
        std::cout << "1. Car\n2. Bus\n3. Motorbike\nChoice: ";
        std::cin >> type;
        std::cout << "Enter vehicle ID: ";
        std::cin >> id;

        std::unique_ptr<Vehicle> vehicle;

        if (type == "Car") {
            vehicle = std::unique_ptr<Car>(new Car(id));
        } else if (type == "Bus") {
            vehicle = std::unique_ptr<Bus>(new Bus(id));
        } else if (type == "Motorbike") {
            vehicle = std::unique_ptr<Motorbike>(new Motorbike(id));
        } else {
            std::cout << "Invalid type. Try again.\n";
            continue; 
        }

        lot.parkVehicle(std::move(vehicle));
    }

    std::cout << "\nParking lot is full.\n";

    int idToUnpark;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> idToUnpark;

    lot.unparkVehicle(idToUnpark);

    std::cout << "Current vehicles in lot: " << lot.getCount() << "\n";

    return 0;
}
