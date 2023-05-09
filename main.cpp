//
// Created by felix.roedel on 25.04.2023.
//

#include <iostream>
#include <map>
#include "person.h"

using namespace std;

int main() {
    ///die map muss noch gefüllt werden wird sie momentan nicht
    do {
        string mode;
        cout << "Choose mode:\n"
                "For mod choices, enter \"help\"\n";
        cin >> mode;

        if (mode == "help") {
            cout << "\"add\": Add a new person to database\n"
                    "\"read\": Prints all persons in database to terminal\n"
                    "\"analyse\": Prints youngest and oldest person to terminal\n"
                    "\"exit\": Exits program\n\n";
        } else if (mode == "add") {
            auto *randy = new Person();
            Person::mapUniqueId[randy->unique_id] = randy;
            cout << "Person was added successfully with ID " << randy->unique_id << "!" << endl;
        } else if (mode == "read") {
            //for (int i = 0; i < Person::GetNumberOfDatasets(); i++) {

            //}
        } else if (mode == "analyse") {

        } else if (mode == "exit")
            break;
        else if (mode == "search") {
            cout << "Search by ID. Enter a ID: " << endl;
            int id_input;
            cin >> id_input;
            Person::PrintPerson(id_input);
        } else {
            cout << "Not a valid mode, try again\n";
        }
    } while (true);
    return 0;
}
