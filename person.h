//
// Created by felix.roedel on 25.04.2023.
//

#ifndef DATABASE_PERSON_H
#define DATABASE_PERSON_H

#include <iostream>
#include <map>

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
    static int last_assigned_id;
    static int number_of_datasets;

public:
    const int unique_id;

    //constructor
    Person();

    //methods


    string GetFirstname(const int unique_id);
    void SetFirstname(const int unique_id, string firstname_input);

    string GetLastname(const int unique_id);
    void SetLastname(const int unique_id, string lastname_input);

    int GetAge(const int unique_id);
    void SetAge(int unique_id, int age_input);

    enum gender GetGender(int unique_id);
    void SetGender(int unique_id, string gender_input);

    void InitNumberOfDatasets();
    void IncreaseNumberOfDatasets();
    static int GetNumberOfDatasets();

    void InitLastAssignedId();
    int GetLastAssignedId();

    void PrintPerson(int unique_id);
};
static map<int, Person *> mapUniqueId;
#endif //DATABASE_PERSON_H
