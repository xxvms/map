#include <iostream>
#include <map>
#include "Person.h"


int main() {

    Person John("John", "Snow", 123);
    Person Tyrion("Tyrion", "Lannister", 8);

    std::map<int, Person> people;

    people[John.Get_number()] = John;
    people[Tyrion.Get_number()] = Tyrion;

    // more manual way to get to same result as higher
    Person Arya("Arya", "Stark ", 124);
    std::pair<int,Person> pair(Arya.Get_number(), Arya);
    people.insert(pair);

    std::cout << "standard loop" << '\n';
    for (auto ip = people.begin(); ip != people.end(); ip++){
        std::cout << ip->first << " " << ip->second.Get_name() << '\n';
    }

    std::cout << "Rage loop" << '\n';
    for (auto &ip : people){
        std::cout << ip.first << " " << ip.second.Get_name() << '\n';
    }

    std::cout << '\n';

    std::cout << "Finding person 123" << '\n';
    auto found = people.find(123);
    std::cout << found->first << " " << found->second.Get_name();

    std::cout << "\nFinding person 8" << '\n';
    auto found1 = people.find(8);
    std::cout << found1->first << " " << found1->second.Get_name();

    std::cout << "\nFinding person 8" << '\n';
    std::string who = people[124].Get_name();
    std::cout << "person at 124 is " << who << ".";



    return 0;
}