//Beepsong

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>

#include "beepmaker.hpp"

using namespace std;


int main(int argc, char* argv[]) {
    
   
    char note;
    int time;

    parse("Score.txt");
    
    cout << endl<< endl << "Boop di Boop " << endl << endl;

    system ("pause");

   
    return 0;

}