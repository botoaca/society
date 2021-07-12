#include "include/Util.h"
#include "include/Person.h"
#include "include/Society.h"
#include "include/SocietyManager.h"
#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

int main() {
    long DaysPassed = 0;
    int Id = 0;
    Society s;
    SocietyManager sm;

    // Society Loop
    for (;;) {
        DaysPassed++;
        CLEAR_SCREEN();

        // Day = DaysPassed % 2 != 0
        // Night = DaysPassed % 2 == 0
        if (DaysPassed % 2 == 0) {
            if (RAND_RANGE(0, 1) == 0)
                sm.AddPerson(&s, &Id);
        }

        std::vector<Person>& people = s.GetTotalPeople();

        // Life Loop
        for (Person& person : people) {
            person.TickLife();
            if (RAND_RANGE(0, 1) == 0)
                sm.AddMoney(&person, &s, RAND_RANGE(175, 715));
            else sm.RemoveMoney(&person, &s, RAND_RANGE(10, 300));
            
            if (person.GetLifetime() >= 50)
                if (RAND_RANGE(0, 19) == 0) {
                    sm.RemovePerson(&s, person.GetId());
                    continue;
                }
        }
    
        std::cout << "TOTAL PEOPLE COUNTER: " << s.GetTotalPeopleAmount() << "\n";
        std::cout << "TOTAL MONEY: " << s.GetTotalMoney() << "\n";
        std::cout << "DAYS PASSED: " << DaysPassed << "\n";
        std::cout << "-------------------------\n";
        VISUALIZE_PEOPLE_IDS(people);
        VISUALIZE_PEOPLE_LIFETIME(&people);

        WAIT_FOR(1);
    }
}