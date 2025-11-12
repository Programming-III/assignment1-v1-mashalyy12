#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;



animal{
    void display(){
        cout << name , age , ishungry << endl;
       
    }
         void feed(){
            cout << ishungry << endl;
         }
         
}

enclosure{
    void addAnimal(animal* a){
        cout<< "enter the animal name, age and if it is hungary or not" << endl;
        cin << name , age , ishunger <<;
    }
    
    void displayAnimals(){
        cout << animal* << endl;
        
    }
     
        void ~destructor(){
            
        }
         
}

vistor{
    void displayInfo(){
        cout << visitorName, ticketsBought << endl;
    }
}
int main() {
    Enclosure* enclosure = new Enclosure(5);
   Animal* lion = new Mammal("Leo the Lion", 5, true, "Golden");
    Animal* eagle = new Bird("Eddie the Eagle", 3, false, 2.5);
    Animal* snake = new Reptile("Sam the Snake", 2, true, true);

    enclosure->addAnimal(lion);
  enclosure->addAnimal(eagle);
    enclosure->addAnimal(snake);
    enclosure->displayAnimals();
    Visitor visitor("Ahmed Ali", 2);
    visitor.displayInfo();
    delete enclosure;

    return 0;
}
