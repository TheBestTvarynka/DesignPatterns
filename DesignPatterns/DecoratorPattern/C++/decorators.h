//
// Created by qkation on 12/28/19.
//

#ifndef C___DECORATORS_H
#define C___DECORATORS_H

#include "components.h"

class CondimentDecorator : public Beverage {
    Beverage *wrappedObj;
public:
    CondimentDecorator(Beverage *obj) {
        CondimentDecorator::wrappedObj = obj;
    }
    Beverage *getWrappedObj() {
        return wrappedObj;
    }
    string getDescription() {
        return wrappedObj->getDescription();
    }
};
// create new decorators
class Milk : public CondimentDecorator {
public:
    Milk(Beverage *obj) : CondimentDecorator(obj) {};
    string getDescription() {
        return getWrappedObj()->getDescription() + ", Milk";
    }
    float cost() {
        return 2.3 + getWrappedObj()->cost();
    }
};

class Soy : public CondimentDecorator {
public:
    Soy(Beverage *obj) : CondimentDecorator(obj) {};
    string getDescription() {
        return getWrappedObj()->getDescription() + ", Soy";
    }
    float cost() {
        return 1.5 + getWrappedObj()->cost();
    }
};

class Mashmels : public CondimentDecorator {
public:
    Mashmels(Beverage *obj) : CondimentDecorator(obj) {};
    string getDescription() {
        return getWrappedObj()->getDescription() + ", Mashmels";
    }
    float cost() {
        return 0.87 + getWrappedObj()->cost();
    }
};
#endif //C___DECORATORS_H
