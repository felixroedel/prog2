//
// Created by felix.roedel on 25.04.2023.
//

#include <iostream>
#include <map>
#include "person.h"
#include "mode.h"

using namespace std;

int main() {
    do {
        string mode;
        cout << "Choose mode:\n"
                "For mod choices, enter \"help\"\n";
        cin >> mode;

        if (mode == "help") {
            Mode::Help();
        } else if (mode == "add") {
            Mode::Add();
        } else if (mode == "info") {
            //for (int i = 0; i < Person::GetNumberOfDatasets(); i++) {

            //}
        } else if (mode == "analyse") {

        } else if (mode == "exit"){
            Mode::Exit();
            break;
        }
        else if (mode == "search") {
            Mode::Search();
        }
        else {
            cout << "Not a valid mode, try again\n";
        }
    } while (true);
    return 0;
}
