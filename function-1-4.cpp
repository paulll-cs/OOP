#include "Person.h"

PersonList shallowCopyPersonList(const PersonList& pl){
    PersonList copy;
    copy.numPeople = pl.numPeople;
    copy.people = pl.people;

    return copy;
}