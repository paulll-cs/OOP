#ifndef CAR_H
#define CAR_H
class Car : public Vehicle {
    public:
        Car(int id);
        int getParkingDuration() const override;
};

#endif