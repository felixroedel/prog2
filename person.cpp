//
// Created by felix.roedel on 25.04.2023.
//

#include "person.h"

using namespace std;

enum gender stringToGenderTypeConverter(string str) {
    if (str == "male")
        return gender::male;
    if (str == "female")
        return gender::female;
    else
        return gender::undefined;
}

//initializing static members
int Person::number_of_datasets = 0;
int Person::last_assigned_id = 0;

//constructor of class Person
Person::Person() : unique_id(GetLastAssignedId() + 1) {
    string firstname_init, lastname_init, gender_init;
    int age_init, unique_id_init;

    cout << "Firstname: " << endl;
    cin >> firstname_init;
    InitFirstname(this, firstname_init);
    cout << "Lastname: " << endl;
    cin >> lastname_init;
    InitLastname(this, lastname_init);
    cout << "Age: " << endl;
    cin >> age_init;
    InitAge(this, age_init);
    cout << "Gender: " << endl;
    cin >> gender_init;
    InitGender(this, gender_init);
    IncreaseNumberOfDatasets();
}

//methods

void InitFirstname(Person *PersonPointer, string firstname_input) {
    PersonPointer->firstname = firstname_input;
}

void InitLastname(Person *PersonPointer, string lastname_input) {
    PersonPointer->lastname = lastname_input;
}

void InitAge(Person *PersonPointer, int age_input) {
    PersonPointer->age = age_input;
}

void InitGender(Person *PersonPointer, string gender_input) {
    PersonPointer->gender = stringToGenderTypeConverter(gender_input);
}

string Person::GetFirstname(const int unique_id) {
    if(mapUniqueId[unique_id] == nullptr)
        return "allahu akbar";
    else
        return mapUniqueId[unique_id]->firstname;
}

void Person::SetFirstname(const int unique_id, string firstname_input) {
    mapUniqueId[unique_id]->firstname = firstname_input;
    return;
}

string Person::GetLastname(const int unique_id) {
    return mapUniqueId[unique_id]->lastname;
}

void Person::SetLastname(const int unique_id, string lastname_input) {
    mapUniqueId[unique_id]->lastname = lastname_input;
    return;
}

int Person::GetAge(const int unique_id) {
    return mapUniqueId[unique_id]->age;
}

void Person::SetAge(const int unique_id, int age_input) {
    mapUniqueId[unique_id]->age = age_input;
    return;
}

enum gender Person::GetGender(const int unique_id) {
    return mapUniqueId[unique_id]->gender;
}

int Person::GetNumberOfDatasets() {
    return Person::number_of_datasets;
}

void Person::SetGender(const int unique_id, string gender_input) {
    mapUniqueId[unique_id]->gender = stringToGenderTypeConverter(gender_input);
}


void Person::IncreaseNumberOfDatasets() {
    Person::number_of_datasets++;
}

int Person::GetLastAssignedId() {
    return Person::last_assigned_id;
}

void Person::PrintPerson(const int unique_id) {
    cout << "Firstname: " << GetFirstname(unique_id) << "/n";
    cout << "Lastname: " << GetLastname(unique_id) << "/n";
    cout << "Age: " << GetAge(unique_id) << "/n";
    //cout << "Gender: " << GetGender(unique_id) << "/n";
}
