//
// Created by qkation on 12/29/19.
//

#ifndef C___PIZZASTORE_H
#define C___PIZZASTORE_H

#include "pizza.h"

class PizzaStore {
public:
    // one method for ordering the pizza
    Pizza *orderPizza(string type) {
        Pizza *order = createPizza(type);
        order->prepare();
        order->cut();
        order->wrap();
        return order;
    }
    // it's factory method. we must implement this method in child classes
    virtual Pizza *createPizza(string type) = 0;
};
// create regional pizza's stores
class NYPizzaStore : public PizzaStore {
public:
    Pizza *createPizza(string type) {
        if (type == "NYPizza")
            return new NYPizza(new NYPizzaIngredientFactory);
        else
            return new NYPizza(new NYPizzaIngredientFactory);
    }
};
class ChicagoPizzaStore : public PizzaStore {
public:
    Pizza *createPizza(string type) {
        if (type == "ChicagoPizza")
            return new ChicagoPizza(new ChicagoPizzaIngredientFactory);
        else if (type == "ChicagoPizzaWithoutSouse")
            return new ChicagoPizzaWithoutSouse(new ChicagoPizzaIngredientFactory);
        else
            return new ChicagoPizza(new ChicagoPizzaIngredientFactory);
    }
};

#endif //C___PIZZASTORE_H
