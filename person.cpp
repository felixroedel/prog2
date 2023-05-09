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

//constructor of class Person
Person::Person() {
    string firstname_init, lastname_init, gender_init;
    int age_init;
    cout << "Firstname: " << endl;
    cin >> firstname_init;
    SetFirstname(this, firstname_init);
    cout << "Lastname: " << endl;
    cin >> lastname_init;
    SetLastname(this, lastname_init);
    cout << "Age: " << endl;
    cin >> age_init;
    SetAge(this, age_init);
    cout << "Gender: " << endl;
    cin >> gender_init;
    SetGender(this, gender_init);
    number_of_datasets ++;
}
string Person::GetFirstname(Person *unique_id) {
    return unique_id->firstname;
}

void Person::SetFirstname(Person *unique_id, string firstname_input) {
    unique_id->firstname = firstname_input;
    return;
}

string Person::GetLastname(Person *unique_id) {
    return unique_id->lastname;
}

void Person::SetLastname(Person *unique_id, string lastname_input) {
    unique_id->lastname = lastname_input;
    return;
}

int Person::GetAge(Person *unique_id) {
    return unique_id->age;
}

void Person::SetAge(Person *unique_id, int age_input) {
    unique_id->age = age_input;
    return;
}

enum gender Person::GetGender(Person *unique_id) {
    return unique_id->gender;
}

void Person::SetGender(Person *unique_id, string gender_input) {
    unique_id->gender = stringToGenderTypeConverter(gender_input);
    return;
}

int Person::GetNumber_of_datasets(Person *unique_id) {
    return unique_id->number_of_datasets;
}

void Person::PrintPerson(Person *unique_id) {
    cout << "Firstname: " <<
}
