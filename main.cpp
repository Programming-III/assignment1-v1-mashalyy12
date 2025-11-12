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
    
    
    return 0;
}
