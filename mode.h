//
// Created by felix.roedel on 10.05.2023.
//

#ifndef DATABASE_MODE_H
#define DATABASE_MODE_H

#include <stdio.h>
#include "person.h"

class Mode{
public:
    static void Help();
    static void Add();
    static void Info();
    static void Search();
    static void Analyse();
    static void Exit();
};

#endif //DATABASE_MODE_H
