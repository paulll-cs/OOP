#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
    private:
        std::time_t timeOfEntry;
        int ID_;

    public:
        Vehicle(int id);
        virtual ~Vehicle();

        int getID() const;
        virtual int getParkingDuration() const;
};

class Car : public Vehicle {
    public:
        Car(int id);
        int getParkingDuration() const override;
};

class Bus : public Vehicle {
    public:
        Bus(int id);
        int getParkingDuration() const override;
};

class Motorbike : public Vehicle {
    public:
        Motorbike(int id);
        int getParkingDuration() const override;
};

#endif
