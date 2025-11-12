#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"


public class enclosure{
    private:
    animal* animal;
    int capacity;
    int currentCount;
    
    public:
    this -> animal* = animal;
    this -> capacity = capacity;
    this -> currentCount = currentCount;

   ~destructor(){
        delete animal;
    }
    
    
    
};






#endif
