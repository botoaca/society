#ifndef SOCIETYMANAGER_H
#define SOCIETYMANAGER_H

#include "Person.h"
#include "Society.h"

class SocietyManager {
    public:
        SocietyManager();
        void AddMoney(Person* p, Society* s, int amount);
        void RemoveMoney(Person* p, Society* s, int amount);
        void AddPerson(Society* s, int* id);
        void RemovePerson(Society* s, int id);
}; 

#endif // SOCIETYMANAGER_H