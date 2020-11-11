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
        cout << "Âîäà â ÷àéíèêå çàêèïèò ÷åðåç: " << endl;
        for (int i = 5; i >=1; i--)
        {
            cout << i << "..." << endl;
            Sleep(1000);
        }
        cout << "Âîäà â ÷àéíèêå çàêèïåëà! " << endl;
        isKettleTurnedOn = false;
    }
    else
    {
        cout << "×àéíèê íå ïîäêëþ÷åí ê ñåòè è/èëè ÷àéíèê ïóñò" << endl;
    }
}

std::string Kettle::displayKettleSocketedStatus() {

    if (isKettleSocketed)
    {
        return "×àéíèê ÏÎÄÊËÞ×ÅÍ ê ñåòè";
    }
    else
    {
        return "×àéíèê ÍÅ ÏÎÄÊËÞ×ÅÍ ê ñåòè";
    }
}

std::string Kettle::displayKettleFilledWithWaterStatus()
{
    if (isKettleFilledWithWater)
    {
        return "×àéíèê ÍÀÏÎËÍÅÍ âîäîé";
    }
    else
    {
        return "×àéíèê ÏÓÑÒÎÉ";
    }
}

std::string Kettle::displayKettleTurnedOnStatus()
{
    if (isKettleTurnedOn)
    {
        return "×àéíèê ÂÊËÞ×ÅÍ";
    }
    else
    {
        return "×àéíèê ÂÛÊËÞ×ÅÍ";
    }
}

bool Kettle::getIsKettleSocketed() {
    return isKettleSocketed;
}

bool Kettle::getIsKettleFilledWithWater() {
    return isKettleFilledWithWater;
}
