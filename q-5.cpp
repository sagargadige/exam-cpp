#include<iostream>
using namespace std;

// Parent class 
class Animal {
public:
    virtual void sound() = 0;
    virtual void move() = 0;
};

// Child class 
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog Barks"<<endl;
    }
    void move() override {
        cout << "Dog runs"<<endl;
    }
};

// Child class 
class Bird : public Animal {
public:
    void sound() override {
        cout << "Bird Tweet"<<endl;
    }
    void move() override {
        cout << "Bird fly in the sky."<<endl;
    }
};

int main() {
    Animal* animals[2];

    animals[0] = new Dog();
    animals[1] = new Bird();

    for (int i = 0; i < 2; i++) {
        cout<<"-------Animal "<<i+1<<" information-------"<<endl;
        animals[i]->sound();
        animals[i]->move();
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}