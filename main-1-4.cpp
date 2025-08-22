#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    PersonList original = createPersonList(3);
    PersonList copied = shallowCopyPersonList(original);

    copied.people[0].name = "Changed Name";
    copied.people[0].age = 99;
    
    std::cout << "Original list:" << std::endl;
    for (int i = 0; i < original.numPeople; i++) {
        std::cout << "  Person " << i+1 << ": "
                  << original.people[i].name << ", "
                  << original.people[i].age << std::endl;
    }
    std::cout << "\nCopied list:" << std::endl;
    for (int i = 0; i < copied.numPeople; i++) {
        std::cout << "  Person " << i+1 << ": "
                  << copied.people[i].name << ", "
                  << copied.people[i].age << std::endl;
    }

    delete[] original.people;
    delete[] copied.people;

    return 0;
}