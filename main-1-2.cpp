#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main() {
    int n = 3;
    PersonList myList = createPersonList(n);

    for (int i = 0; i < myList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": "
                  << myList.people[i].name << ", "
                  << myList.people[i].age << std::endl;
    }
    delete[] myList.people;

    return 0;
}