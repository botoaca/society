#include "include/SocietyManager.h"

SocietyManager::SocietyManager() = default;

void SocietyManager::AddMoney(Person* p, Society* s, int amount) {
    p->AddMoney(amount);
    s->AddToTotalMoney(amount);
}

void SocietyManager::RemoveMoney(Person* p, Society* s, int amount) {
    p->RemoveMoney(amount);
    s->RemoveFromTotalMoney(amount);
}

void SocietyManager::AddPerson(Society* s, int* id) {
    Person p(*id);
    s->AddToTotalPeople(p);
    *id += 1;
}

void SocietyManager::RemovePerson(Society* s, int id) {
    s->RemoveFromTotalPeople(id);
}