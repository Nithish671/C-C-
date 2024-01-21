#include <iostream>
using namespace std;

class Animal {
    public:
    void animalSound() {
        cout <<"The animal makes a sound.\n";
    };
};

class Dog : public Animal {
    public:
    void animalSound() {
        cout << "The dog says : Bow Bow...\n";
    };
};

class Pig : public Animal {
    public:
    void animalSound() {
        cout << "The pig says : Wee Wee...\n";
    }
};

class Cat : public Animal {
    public:
    void animalSound() {
        cout << "The cat says : Meow Meow...\n";
    }
};

int main() {
    Animal myAnimal;
    Dog myDog;
    Cat myCat;
    Pig myPig;
    
    myAnimal.animalSound();
    myCat.animalSound();
    myPig.animalSound();
    myDog.animalSound();

}