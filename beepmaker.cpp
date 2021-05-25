#include "beepmaker.hpp"

#include <iostream>
#include <windows.h>

using namespace std;

DWORD dwFreq, dwDuration;

bool Playnote (char note, int time){
   
    switch (note){
        case 'A': case 'a':
            cout << endl << "A" << endl;
            dwFreq = 2750;
            break;

        case 'B': case 'b' :
            cout << endl <<  "B" << endl;
            dwFreq = 3087;
            break;

        case 'C': case 'c' :
            cout << endl <<  "C" << endl;
            dwFreq = 1637;
            break;

        case 'D': case 'd' :
            cout << endl <<  "D" << endl;
            dwFreq = 1835;
            break;

        case 'E': case 'e' :
            cout << endl <<  "E" << endl;
            dwFreq = 2060;
            break;

        case 'F' : case 'f' :
            cout << endl <<  "F" << endl;
            dwFreq = 2183;
            break;

        case 'G' : case 'g' :
            cout << endl <<  "G" << endl;
            dwFreq = 2450;
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
        Beep (dwFreq,time);
        return true; 
    }
     
}

void parse (string filename){
    //string filename = "Score.txt";
    ifstream input;

    input.open(filename);
    if (!input.is_open()){
        cerr;
    }

    while (input){
        char note;
        input >> note;
        int time;
        input >> time;

        
        if (!input){
            break;
        }

        cout << Playnote(note,time) << endl;

    }
    
    input.close();
}