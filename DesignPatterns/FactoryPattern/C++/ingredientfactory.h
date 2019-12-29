//
// Created by qkation on 12/29/19.
//

#ifndef C___INGREDIENTFACTORY_H
#define C___INGREDIENTFACTORY_H

#include <string>

using std::string;

// create abstract factory
class PizzaIngredientFactory {
public:
    virtual string createDough() = 0;
    virtual string createSouse() = 0;
    virtual string createPapperoni() = 0;
};
// implement concrete factories
class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    string createDough() { return "get NY Dough"; }
    string createSouse() { return "get NY Souse"; }
    string createPapperoni() { return "get NY Papperoni"; }
};
class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    string createDough() { return "get Chicago Dough"; }
    string createSouse() { return "get Chicago Souse"; }
    string createPapperoni() { return "get Chicago Papperoni"; }
};
// we can create unlimited number of factories
// we can create unlimited number of specials, but when we add new, we need to change interface if all factories

#endif //C___INGREDIENTFACTORY_H
