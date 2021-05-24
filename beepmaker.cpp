#include "beepmaker.hpp"

#include <iostream>
#include <windows.h>

using namespace std;

DWORD dwFreq, dwDuration;

bool Boop::Playnote (char note, int time){

     cout << "Veuillez entrer une note: A/B/C/D/E/F/G ou W " << endl;
    cin >> note;

 
    switch (note){
        case 'A': case 'a':
            cout << "Note A choisie : " << endl;
            dwFreq = 2750;
            break;

        case 'B': case 'b' :
            cout << "Note B choisie : " << endl;
            dwFreq = 3087;
            break;

        case 'C': case 'c' :
            cout << "Note C choisie : " << endl;
            dwFreq = 1637;
            break;

        case 'D': case 'd' :
            cout << "Note D choisie : " << endl;
            dwFreq = 1835;
            break;

        case 'E': case 'e' :
            cout << "Note E choisie : " << endl;
            dwFreq = 2060;
            break;

        case 'F' : case 'f' :
            cout << "Note F choisie : " << endl;
            dwFreq = 2183;
            break;

        case 'G' : case 'g' :
            cout << "Note G choisie : " << endl;
            dwFreq = 2450;
            break;

        case 'W' : case 'w' :
            cout << "Break choisie : " << endl;
            dwFreq = 0;
            break;

        default :
            cout << "Saisie incorrecte"<< endl;
            return false;    
    }
    cout << " Maintenant, entrer une duree (en ms): " << endl;
    cin >> time;

    cout << "Frequence: " << dwFreq << " Hz."<< " Duree: "<< time <<" Ms." << endl;

    Beep(dwFreq,time);

    cout << " Boop di Boop " << endl;
    return true;
}