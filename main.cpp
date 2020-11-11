#include "kettle.h"


using namespace std;

bool isMenuActive = true;
const string menuText =
    "\n ����:\n 1 - ���������� �/��������� �� ���� ������\n 2 - ���������/���������� ������\n 3 - �������� ������\n 4 - �����: ";

void displayKettleStatus(Kettle kettle)
{
    cout << endl;
    cout << kettle.displayKettleSocketedStatus() << endl;
    cout << kettle.displayKettleFilledWithWaterStatus() << endl;
    cout << kettle.displayKettleTurnedOnStatus() << endl;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");

    Kettle kettle;
    int menuCurrentCommand;

    displayKettleStatus(kettle);

    while (isMenuActive)
    {
        cout << menuText;
        cin >> menuCurrentCommand;
        cout << endl;
        switch (menuCurrentCommand)
        {
            case 1:
                kettle.changeIsKettleSocketedStatus();
                displayKettleStatus(kettle);
                break;
            case 2:
                kettle.changeIsKettleFilledWithWaterStatus();
                displayKettleStatus(kettle);
                break;
            case 3:
                kettle.turnOnKettle();
                displayKettleStatus(kettle);
                break;
            case 4:
                cout << "\n�����..." << endl;
                isMenuActive = false;
                break;
        }
    }

    return 0;
}
