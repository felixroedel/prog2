//
// Created by felix.roedel on 10.05.2023.
//

#include "mode.h"
#include "person.h"

using namespace std;

//implementation of methods
void Mode::Help() {
    cout << "\"add\": Add a new person to database\n"
            "\"info\": Prints all persons in database to terminal\n"
            "\"search\": Search for specific person by unique ID\n"
            "\"analyse\": Prints youngest and oldest person to terminal\n"
            "\"exit\": Exits program\n";
}

void Mode::Add() {
    auto *randy = new Person();
    Person::mapUniqueId[randy->unique_id] = randy;
    cout << "Person was added successfully with ID " << randy->unique_id << "!" << endl;
}


void Mode::Exit() {
    cout << "Exit Program ..." << endl;
}

void Mode::Search() {
    cout << "Search by ID. Enter a ID: " << endl;
    int id_input;
    cin >> id_input;
    if (Person::mapUniqueId[id_input] == nullptr) {
        cout << "No User found with ID " << id_input << endl;
    } else {
        cout << "Person with Unique ID " << id_input << ":" << endl;
        Person::PrintPerson(id_input);
    }
}

void Mode::Info() {
    for (int iter = 1; iter < Person::GetNumberOfDatasets() + 1; iter++) {
        if (Person::mapUniqueId[iter] == nullptr) {
            cout << "No Person found with ID " << iter << "!" << endl;
            continue;
        } else {
            Person::PrintPerson(iter);
        }
    }
}