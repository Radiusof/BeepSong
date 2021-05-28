#include "beepmaker.hpp"

#include <iostream>
#include <windows.h>

using namespace std;

DWORD dwFreq, dwDuration;

bool Playnote (char note, int time){
   
    switch (note){
        case 'A': case 'a':
            cout << endl << "A" << endl;
            Beep (2750, time);
            break;

        case 'B': case 'b' :
            cout << endl <<  "B" << endl;
            Beep(3087,time);
            break;

        case 'C': case 'c' :
            cout << endl <<  "C" << endl;
            Beep(1637,time);
            break;

        case 'D': case 'd' :
            cout << endl <<  "D" << endl;
            Beep (1835,time);
            break;

        case 'E': case 'e' :
            cout << endl <<  "E" << endl;
            Beep (2060,time);
            break;

        case 'F' : case 'f' :
            cout << endl <<  "F" << endl;
            Beep (2183,time);
            break;

        case 'G' : case 'g' :
            cout << endl <<  "G" << endl;
           Beep(2450,time);
            break;

        case 'W' : case 'w' :
            cout << endl <<  "Break" << endl;
            break;

        default :
            cout << endl <<  "Saisie incorrecte"<< endl;
            return false;    
    }

    if(note == 'W' || note == 'w'){
        Sleep (time);
        return true;
    }else{
        return true; 
    }
     
}

void parse (string filename){
    //string filename = "Score.txt";
    ifstream input;

    input.open(filename);
    if (!input.is_open()){
        cerr << "Ouverture de fichier impossible!"<<endl;
    }

    while (input){
        char note;
        input >> note;
        int time;
        input >> time;

        
        if (!input){
            break;
        }

        Playnote(note,time) ;

    }
    
    input.close();
}