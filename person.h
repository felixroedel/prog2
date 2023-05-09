//
// Created by felix.roedel on 25.04.2023.
//

#ifndef DATABASE_PERSON_H
#define DATABASE_PERSON_H

#include <iostream>
#include <map>

using namespace std;

enum class mode {
    add,
    search,
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
    string lastname;
    int age;
    gender gender;
    static int last_assigned_id;
    static int number_of_datasets;

public:
    const int unique_id;
    static map<int, Person *> mapUniqueId;
    //constructor
    Person();

    //methods
    friend void InitFirstname(Person* PersonPointer, string firstname_input);
    friend void InitLastname(Person* PersonPointer, string lastname_input);
    friend void InitAge(Person* PersonPointer, int age_input);
    friend void InitGender(Person* PersonPointer, string gender_input);

    static string GetFirstname(int unique_id);
    static void SetFirstname(int unique_id, string firstname_input);

    static string GetLastname(int unique_id);
    static void SetLastname(int unique_id, string lastname_input);

    static int GetAge(int unique_id);
    static void SetAge(int unique_id, int age_input);

    static enum gender GetGender(int unique_id);
    static void SetGender(int unique_id, string gender_input);

    static void IncreaseNumberOfDatasets();
    static int GetNumberOfDatasets();

    static int GetLastAssignedId();

    static void PrintPerson(int unique_id);

    string firstname;
};


 //used in multiple files, want only one map in usage
#endif //DATABASE_PERSON_H
