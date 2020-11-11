#ifndef KETTLE_H
#define KETTLE_H

#include <string>
#include <iostream>

class Kettle {
public:
    Kettle();
    Kettle(bool isKettleSocketed, bool isKettleFilledWithWater, bool
    isKettleTurnedOn);

    void changeIsKettleSocketedStatus();
    void changeIsKettleFilledWithWaterStatus();
    void turnOnKettle();

    std::string displayKettleSocketedStatus();
    std::string displayKettleFilledWithWaterStatus();
    std::string displayKettleTurnedOnStatus();

    bool getIsKettleSocketed();
    bool getIsKettleFilledWithWater();

private:

    bool isKettleSocketed;
    bool isKettleFilledWithWater;
    bool isKettleTurnedOn;
};

#endif // KETTLE_H
