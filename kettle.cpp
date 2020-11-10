#include "kettle.h"
#include "windows.h"
#include <iostream>

using namespace std;

Kettle::Kettle() {
    isKettleSocketed = false;
    isKettleFilledWithWater = false;
    isKettleTurnedOn = false;
}

Kettle::Kettle(bool isKettleSocketed, bool isKettleFilledWithWater, bool isKettleTurnedOn) {
    this->isKettleSocketed = isKettleSocketed;
    this->isKettleFilledWithWater = isKettleFilledWithWater;
    this->isKettleTurnedOn = isKettleTurnedOn;
}

void Kettle::changeIsKettleSocketedStatus() {
    isKettleSocketed = !isKettleSocketed;
}

void Kettle::changeIsKettleFilledWithWaterStatus() {
    isKettleFilledWithWater = !isKettleFilledWithWater;
}

void Kettle::turnOnKettle() {

    if (isKettleSocketed && isKettleFilledWithWater)
    {
        isKettleTurnedOn = true;
        displayKettleTurnedOnStatus();
        cout << "Вода в чайнике закипит через: " << endl;
        for (int i = 5; i >=1; i--)
        {
            cout << i << "..." << endl;
            Sleep(1000);
        }
        cout << "Вода в чайнике закипела! " << endl;
        isKettleTurnedOn = false;
    }
    else
    {
        cout << "Чайник не подключен к сети и/или чайник пуст" << endl;
    }
}

void Kettle::displayKettleSocketedStatus() {

    isKettleSocketed ? cout << "Чайник ПОДКЛЮЧЕН к сети" << endl : cout <<
    "Чайник НЕ ПОДКЛЮЧЕН к сети" << endl;
}

void Kettle::displayKettleFilledWithWaterStatus()
{
    isKettleFilledWithWater ? cout << "Чайник НАПОЛНЕН водой" << endl : cout <<
    "Чайник ПУСТОЙ" << endl;
}

void Kettle::displayKettleTurnedOnStatus()
{
    isKettleTurnedOn ? cout << "Чайник ВКЛЮЧЕН" << endl : cout <<
    "Чайник ВЫКЛЮЧЕН" << endl;
}

bool Kettle::getIsKettleSocketed() {
    return isKettleSocketed;
}

bool Kettle::getIsKettleFilledWithWater() {
    return isKettleFilledWithWater;
}
