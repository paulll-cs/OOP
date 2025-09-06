#include <iostream>
#include <memory>
#include <thread>   // for std::this_thread::sleep_for
#include <chrono>   // for std::chrono::seconds
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10); // parking lot with capacity 10

    int carsToPark = 5;
    int busesToPark = 3;
    int bikesToPark = 2;

    std::cout << "Parking 5 Cars, 3 Buses, and 2 Motorbikes...\n";

    int vehicleID = 100; // starting ID

    // Park Cars
    for (int i = 0; i < carsToPark; i++) {
        std::unique_ptr<Vehicle> car = std::unique_ptr<Car>(new Car(vehicleID++));
        lot.parkVehicle(car.release());
        std::cout << "Parked Car with ID " << vehicleID-1 << "\n";
    }

    // Park Buses
    for (int i = 0; i < busesToPark; i++) {
        std::unique_ptr<Vehicle> bus = std::unique_ptr<Bus>(new Bus(vehicleID++));
        lot.parkVehicle(bus.release());
        std::cout << "Parked Bus with ID " << vehicleID-1 << "\n";
    }

    // Park Motorbikes
    for (int i = 0; i < bikesToPark; i++) {
        std::unique_ptr<Vehicle> bike = std::unique_ptr<Motorbike>(new Motorbike(vehicleID++));
        lot.parkVehicle(bike.release());
        std::cout << "Parked Motorbike with ID " << vehicleID-1 << "\n";
    }

    std::cout << "\nParking lot is now full.\n";

    // Optional: simulate time passing
    std::cout << "Simulating parking time... waiting 16 seconds...\n";
    std::this_thread::sleep_for(std::chrono::seconds(16));

    // Count vehicles that have overstayed more than 15 seconds
    int overstayingCount = lot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles overstaying 15 seconds: " << overstayingCount << "\n";

    return 0;
}
