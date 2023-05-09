#include <iostream>
#include <map>
#include "person.h"


using namespace std;

int main() {
    map<int, Person*> mapUniqueId;

    do {

        string mode;
        cout << "Choose mode:\n"
                "For modi choices, enter \"help\"\n";
        cin >> mode;

        if (mode == "help") {
            cout << "\"write\": Add a new person to database\n"
                    "\"read\": Prints all persons in database to terminal\n"
                    "\"analyse\": Prints youngest and oldest person to terminal\n"
                    "\"exit\": Exits programm\n\n";
        } else if (mode == "write") {
            Person *randy = new Person();
            mapUniqueId.insert({randy->unique_id, randy});
            cout << "Person was added successfully!\n";
        } else if (mode == "read") {
            for (int i = 0; i < Person::GetNumber_of_datasets(); i++) {

            }
        } else if (mode == "analyse") {

        } else if (mode == "exit")
            break;
        else {
            cout << "Not a valid mode, try again\n";
        }
    } while (true);
    return 0;
}
