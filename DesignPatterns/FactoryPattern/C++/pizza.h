//
// Created by qkation on 12/29/19.
//

#ifndef C___PIZZA_H
#define C___PIZZA_H

#include <iostream>
#include "ingredientfactory.h"

using std::cout;
using std::endl;

class Pizza {
public:
    // methods for ordering the pizza
    virtual void cut() = 0;
    virtual void prepare() = 0;
    virtual void wrap() = 0;
};
// concrete pizzas
class ChicagoPizza : public Pizza {
    PizzaIngredientFactory *ingredients;
public:
    ChicagoPizza(PizzaIngredientFactory *factory) : ingredients(factory) {};
    void cut() { cout << "Cut Chicago Pizza..." << endl; }
    void prepare() {
        cout << "Prepare Chicago Pizza...\nIngredients:" << endl;
        cout << ingredients->createDough() << endl;
        cout << ingredients->createSouse() << endl;
        cout << ingredients->createPapperoni() << endl;
    }
    void wrap() { cout << "Wrap Chicago Pizza..." << endl; }
};
class ChicagoPizzaWithoutSouse : public Pizza {
    PizzaIngredientFactory *ingredients;
public:
    ChicagoPizzaWithoutSouse(PizzaIngredientFactory *factory) : ingredients(factory) {};
    void cut() { cout << "Cut Chicago Pizza..." << endl; }
    void prepare() {
        cout << "Prepare Chicago Pizza...\nIngredients:" << endl;
        cout << ingredients->createDough() << endl;
        cout << ingredients->createSouse() << endl;
        cout << ingredients->createPapperoni() << endl;
    }
    void wrap() { cout << "Wrap Chicago Pizza..." << endl; }
};
class NYPizza : public Pizza {
    PizzaIngredientFactory *ingredients;
public:
    NYPizza(PizzaIngredientFactory *factory) : ingredients(factory) {};
    void cut() { cout << "Cut Chicago Pizza..." << endl; }
    void prepare() {
        cout << "Prepare Chicago Pizza...\nIngredients:" << endl;
        cout << ingredients->createDough() << endl;
        cout << ingredients->createPapperoni() << endl;
        cout << ingredients->createSouse() << endl;
    }
    void wrap() { cout << "Wrap Chicago Pizza..." << endl; }
};
// we can create unlimited number of different pizzas

#endif //C___PIZZA_H
