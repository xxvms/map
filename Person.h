//
// Created by tombr on 17/08/2017.
//

#ifndef SHARED_PTR_INHERIT_PERSON_H
#define SHARED_PTR_INHERIT_PERSON_H

#include <string>

class Person {
private:
    std::string first_name;
    std::string last_name;
    int arbitrary_number;
public:
    Person(std::string first, std::string last, int arbitrary);
    Person();
    ~Person();
    std::string Get_name()const;
    int Get_number() const { return  arbitrary_number; }
};



#endif //SHARED_PTR_INHERIT_PERSON_H
