#ifndef PERSON_H
#define PERSON_H

class Person {
    int _id;
    long _money;
    long _lifetime;

    public:
        Person(int);
        void AddMoney(int);
        void RemoveMoney(int);
        int GetId();
        void TickLife();
        long GetLifetime();
};

#endif // PERSON_H