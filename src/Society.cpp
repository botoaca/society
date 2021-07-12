#include "include/Society.h"

Society::Society() {
    _TotalMoney = 0;
    _TotalPeopleAmount = 0;
};

void Society::AddToTotalPeople(Person person) {
    _TotalPeople.push_back(person);
    _TotalPeopleAmount++;
}

void Society::RemoveFromTotalPeople(int id) {
    _TotalPeople.erase(_TotalPeople.begin() + id);
    _TotalPeopleAmount--;
}

long Society::GetTotalPeopleAmount() {
    return _TotalPeopleAmount;
}

std::vector<Person>& Society::GetTotalPeople() {
    return _TotalPeople;
}

void Society::AddToTotalMoney(int amount) {
    _TotalMoney += amount;
}

void Society::RemoveFromTotalMoney(int amount) {
    _TotalMoney -= amount;
}

long Society::GetTotalMoney() {
    return _TotalMoney;
}