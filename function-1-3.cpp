#include "Person.h"

PersonList createPersonList(int n){
    PersonList list;
    list.numPeople = n;

    list.people = new Person[n];

    for (int i=0;i<n;i++){
        list.people[i].age = 1;
        list.people[i].name = "Jane Doe";
    }
    return list;

}

PersonList deepCopyPersonList(const PersonList& pl){
    PersonList copy;
    copy.numPeople = pl.numPeople;

    copy.people = new Person[pl.numPeople];

    for (int i=0;i<pl.numPeople;i++){
        copy.people[i].age = 1;
        copy.people[i].name = "Jane Doe";
    }

    return copy;
}