// 10-3-polymorph-animals.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Make a class “Animal” with the abstract method speak()
//
//Make classes “dog”and “cat” that inherit from animal.
//
//Override the speak method
//
//Make the objectsand call speak from main


#include <iostream>
#include <vector>
using namespace std;



class Animal {
public:
    
    virtual void speak() const = 0;
    virtual ~Animal() {}
};


class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof! Woof!" << endl;
    }
};


class Cat : public Animal {
public:
    void speak() const override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {

    Dog dog;
    Cat cat;


    vector<Animal*> animals = { &dog, &cat };
    for (const auto& animal : animals) {
        animal->speak();
    }

    return 0;
}


