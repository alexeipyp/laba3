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
        cout << "���� � ������� ������� �����: " << endl;
        for (int i = 5; i >=1; i--)
        {
            cout << i << "..." << endl;
            Sleep(1000);
        }
        cout << "���� � ������� ��������! " << endl;
        isKettleTurnedOn = false;
    }
    else
    {
        cout << "������ �� ��������� � ���� �/��� ������ ����" << endl;
    }
}

std::string Kettle::displayKettleSocketedStatus() {

    if (isKettleSocketed)
    {
        return "������ ��������� � ����";
    }
    else
    {
        return "������ �� ��������� � ����";
    }
}

std::string Kettle::displayKettleFilledWithWaterStatus()
{
    if (isKettleFilledWithWater)
    {
        return "������ �������� �����";
    }
    else
    {
        return "������ ������";
    }
}

std::string Kettle::displayKettleTurnedOnStatus()
{
    if (isKettleTurnedOn)
    {
        return "������ �������";
    }
    else
    {
        return "������ ��������";
    }
}

bool Kettle::getIsKettleSocketed() {
    return isKettleSocketed;
}

bool Kettle::getIsKettleFilledWithWater() {
    return isKettleFilledWithWater;
}
