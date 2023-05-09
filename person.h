//
// Created by felix.roedel on 25.04.2023.
//

#ifndef DATABASE_PERSON_H
#define DATABASE_PERSON_H

#include <iostream>

using namespace std;

enum class mode {
    write,
    read,
    analyse,
    exit,
    help
};

enum class gender {
    male,
    female,
    undefined
};

gender stringToGenderTypeConverter(string str);

class Person {
private:
    //attributes
    string firstname;
    string lastname;
    int age;
    gender gender;
    static int number_of_datasets;

public:
    int unique_id;

    //constructor
    Person();

    //methods
    string GetFirstname(Person *unique_id);

    void SetFirstname(Person *unique_id, string firstname_input);

    string GetLastname(Person *unique_id);

    void SetLastname(Person *unique_id, string lastname_input);

    int GetAge(Person *unique_id);

    void SetAge(Person *unique_id, int age_input);

    enum gender GetGender(Person *unique_id);

    void SetGender(Person *unique_id, string gender_input);

    int GetNumber_of_datasets(Person *unique_id);

    void PrintPerson(Person *unique_id);
};

#endif //DATABASE_PERSON_H
