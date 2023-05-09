//
// Created by felix.roedel on 25.04.2023.
//

#include "person.h"
#include <map>

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
    int age_init, unique_id_init;
    cout << "Firstname: " << endl;
    cin >> firstname_init;
    SetFirstname(unique_id_init , firstname_init);
    cout << "Lastname: " << endl;
    cin >> lastname_init;
    SetLastname(unique_id_init, lastname_init);
    cout << "Age: " << endl;
    cin >> age_init;
    SetAge(unique_id_init, age_init);
    cout << "Gender: " << endl;
    cin >> gender_init;
    SetGender(unique_id_init, gender_init);
    number_of_datasets ++;
}
string Person::GetFirstname(int unique_id) {
    return mapUniqueId[unique_id]->firstname;
}

void Person::SetFirstname(int unique_id, string firstname_input) {
    mapUniqueId[unique_id]->firstname = firstname_input;
    return;
}

string Person::GetLastname(int unique_id) {
    return mapUniqueId[unique_id]->lastname;
}

void Person::SetLastname(int unique_id, string lastname_input) {
    mapUniqueId[unique_id]->lastname = lastname_input;
    return;
}

int Person::GetAge(int unique_id) {
    return mapUniqueId[unique_id]->age;
}

void Person::SetAge(int unique_id, int age_input) {
    mapUniqueId[unique_id]->age = age_input;
    return;
}

enum gender Person::GetGender(int unique_id) {
    return mapUniqueId[unique_id]->gender;
}

void Person::SetGender(int unique_id, string gender_input) {
    mapUniqueId[unique_id]->gender = stringToGenderTypeConverter(gender_input);
    return;
}

int Person::GetNumber_of_datasets(int unique_id) {
    return mapUniqueId[unique_id]->number_of_datasets;
}

void Person::PrintPerson(int unique_id) {
    cout << "Firstname: " << GetFirstname(unique_id) << "/n";
    cout << "Lastname: " << GetLastname(unique_id) << "/n";
    cout << "Age: " << GetAge(unique_id) << "/n";
    //cout << "Gender: " << GetGender(unique_id) << "/n";
}
