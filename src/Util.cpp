#include "include/Util.h"
#include <cstdlib>
#include <random>
#include <ctime>

void CLEAR_SCREEN() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void VISUALIZE_PEOPLE_IDS(std::vector<Person> v) {
    std::cout << "ids = { ";
    for (Person p : v) {
        std::cout << p.GetId() << ", ";
    }
    std::cout << "}\n";
}

void VISUALIZE_PEOPLE_LIFETIME(std::vector<Person> *v) {
    std::cout << "lifetimes = { ";
    for (Person p : *v) {
        std::cout << p.GetLifetime() << ", ";
    }
    std::cout << "}\n";
}

int RAND_RANGE(int a, int b) {
    std::mt19937 gen(time(NULL));
    std::uniform_int_distribution<> distr(a, b);
    return distr(gen);
}