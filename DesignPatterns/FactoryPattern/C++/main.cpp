#include <iostream>
#include "pizzastore.h"

int main() {
    cout << "=== Let create a few pizzas ===" << endl;
    cout << "Order 1: NYPizza" << endl;
    PizzaStore *nyStore = new NYPizzaStore;
    Pizza *nyPizza = nyStore->orderPizza("NYPizza");
    cout << "Order 2: ChicagoPizzaWithoutSouse" << endl;
    PizzaStore *chicagoStore = new ChicagoPizzaStore;
    Pizza *chicagoPizzaWithoutSouse = chicagoStore->orderPizza("ChicagoPizzaWithoutSouse");
    return 0;
}