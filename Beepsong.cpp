//Beepsong

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>

#include "beepmaker.hpp"

using namespace std;


int main(int argc, char* argv[]) {
        
    if (argc > 1){                                              // Si ce nombre est supérieur 1, alors argv[1] est le fichier passé en paramètre (argv[0]étant le fichier executable, il ne compte pas)
        parse(argv[1]);                                         
        cout << endl<< endl << "Boop di Boop " << endl << endl;
        
    }
   
    else {                                                       // Si aucun fichier trouvé, invite l'utilisateur à entrer manuellement le nom du fichier, pour ensuite le passé en paramètres. 
        string nomFichier;
        cout << "entrer le nom du fichier a ouvrir: "<< endl;
        cin >> nomFichier;
        cout << endl << "Lancement du fichier: " << nomFichier <<endl;
        system ("pause");

        parse (nomFichier);
        cout << endl<< endl << "Boop di Boop " << endl << endl;
        }
    system ("pause");
    return 0;
}