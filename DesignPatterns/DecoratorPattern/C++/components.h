//
// Created by qkation on 12/28/19.
//

#ifndef C___COMPONENTS_H
#define C___COMPONENTS_H

#include <string>

using std::string;

class Beverage {
    string description;
public:
    Beverage() {
        description = "Unknown beverage";
    }
    virtual string getDescription() {
        return description;
    }
    void setDescription(string newdescription) {
        description = newdescription;
    }
    // need to implement const() method in child classes
    virtual float cost() = 0;
};
// create new beverages
class Espresso : public Beverage {
public:
    Espresso() {
        setDescription("Espresso");
    }
    float cost() {
        return 3.52;
    }
};

class Latte : public Beverage {
public:
    Latte() {
        setDescription("Latte");
    }
    float cost() {
        return 2.61;
    }
};
#endif //C___COMPONENTS_H
