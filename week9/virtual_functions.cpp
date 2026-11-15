// WEEK 9 ACTIVITY 2: virtual functions (static vs dynamic binding)
#include <iostream>
using namespace std;

class Animal {
public:
    void speak() { cout << "Animal makes a generic sound." << endl; }   // NOT virtual
    virtual ~Animal() {}
};
class Dog : public Animal {
public:
    void speak() { cout << "Dog barks: Woof! Woof!" << endl; }
};

// The fix: add 'virtual'
class Animal2 {
public:
    virtual void speak() { cout << "Animal makes a generic sound." << endl; }
    virtual ~Animal2() {}
};
class Dog2 : public Animal2 {
public:
    void speak() override { cout << "Dog barks: Woof! Woof!" << endl; }
};

int main() {
    cout << "--- Without Virtual Keyword ---" << endl;
    Animal* myPet = new Dog();
    myPet->speak();                // prints the Animal version
    delete myPet;

    cout << "\n--- With Virtual Keyword (the fix) ---" << endl;
    Animal2* myPet2 = new Dog2();
    myPet2->speak();               // prints the Dog version
    delete myPet2;
    return 0;
}
