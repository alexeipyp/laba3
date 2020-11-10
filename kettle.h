#ifndef KETTLE_H
#define KETTLE_H

class Kettle {
public:
    Kettle();
    Kettle(bool isKettleSocketed, bool isKettleFilledWithWater, bool
    isKettleTurnedOn);

    void changeIsKettleSocketedStatus();
    void changeIsKettleFilledWithWaterStatus();
    void turnOnKettle();

    void displayKettleSocketedStatus();
    void displayKettleFilledWithWaterStatus();
    void displayKettleTurnedOnStatus();

    bool getIsKettleSocketed();
    bool getIsKettleFilledWithWater();

private:

    bool isKettleSocketed;
    bool isKettleFilledWithWater;
    bool isKettleTurnedOn;
};

#endif // KETTLE_H
