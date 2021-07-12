#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <vector>
#include "Person.h"

#define WAIT_FOR(x) std::this_thread::sleep_for(std::chrono::seconds(x));
void CLEAR_SCREEN();
void VISUALIZE_PEOPLE_IDS(std::vector<Person>);
void VISUALIZE_PEOPLE_LIFETIME(std::vector<Person>*);
int RAND_RANGE(int, int);

#endif // UTIL_H