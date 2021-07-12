#ifndef SOCIETY_H
#define SOCIETY_H

#include <vector>
#include "Person.h"

class Society {
    std::vector<Person> _TotalPeople;
    long _TotalPeopleAmount;
    long _TotalMoney;

    public:
        Society();
        void AddToTotalPeople(Person);
        void RemoveFromTotalPeople(int);
        long GetTotalPeopleAmount();
        std::vector<Person>& GetTotalPeople();

        void AddToTotalMoney(int);
        void RemoveFromTotalMoney(int);
        long GetTotalMoney();
};

#endif // SOCIETY_H