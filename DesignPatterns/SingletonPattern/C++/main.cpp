#include <iostream>
#include "singleton.h"

using std::cout;
using std::endl;

Singleton *Singleton::settings = nullptr;

int main() {
    cout << "=== Test Singleton Pattern ===" << endl;
    Singleton *newSettings = Singleton::getInstance();
    cout << "Default name: " << newSettings->getName() << endl;
    newSettings->setName("Pasha");
    cout << "New name: " << newSettings->getName() << endl;
    Singleton *otherSettings = Singleton::getInstance();
    cout << "Name: " << otherSettings->getName() << endl;
    return 0;
}