#include "kettle.h"


using namespace std;

bool isMenuActive = true;
const string menuText =
    "\n Меню:\n 1 - Подключить к/отключить от сети чайник\n 2 - Наполнить/Опорожнить чайник\n 3 - Включить чайник\n 4 - Выход: ";

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
                cout << "\nВыход..." << endl;
                isMenuActive = false;
                break;
        }
    }

    return 0;
}
