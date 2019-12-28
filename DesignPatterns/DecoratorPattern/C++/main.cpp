#include <iostream>
#include "decorators.h"

using std::cout;
using std::endl;

int main() {
    cout << "=== Test Decorator Pattern ===" << endl;
    // let buy espresso with milk and mashmels
    Beverage *espreso = new Espresso();
    // add milk to our baverage
    Beverage *espresso_milk = new Milk(espreso);
    // add mashmels to our baverage
    Beverage *espresso_milk_mashmels = new Mashmels(espresso_milk);
    // print price of baverage
    cout << espresso_milk_mashmels->getDescription() << ": " << espresso_milk_mashmels->cost() << endl;
    return 0;
}