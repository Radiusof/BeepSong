//Beepsong

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>

#include "beepmaker.hpp"

using namespace std;

int main() {
    char note;
    int time;

    Boop boop;

    boop.Playnote(note,time);

    return 0;

}