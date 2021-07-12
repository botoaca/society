#include "include/Person.h"

Person::Person(int id) {
    _id = id;
    _money = 0;
    _lifetime = 0;
}

void Person::AddMoney(int amount) {
    _money += amount;
}

void Person::RemoveMoney(int amount) {
    _money -= amount;
}

int Person::GetId() {
    return _id;
}

void Person::TickLife() {
    _lifetime++;
}

long Person::GetLifetime() {
    return _lifetime;
}