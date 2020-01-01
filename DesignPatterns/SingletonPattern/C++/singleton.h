//
// Created by qkation on 1/1/20.
//

#ifndef C___SINGLETON_H
#define C___SINGLETON_H

#include <string>

using std::string;

class Singleton {
    string name;
public:
    static Singleton *settings;
    Singleton() {
        name = "";
    };
    static Singleton *getInstance() {
        if (!Singleton::settings) {
            Singleton::settings = new Singleton;
        }
        return Singleton::settings;
    }
    // other methods
    void setName(string data) {
        name = data;
    }
    string getName() {
        return name;
    }
};

#endif //C___SINGLETON_H
