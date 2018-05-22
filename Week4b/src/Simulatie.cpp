#include "Simulatie.h"

Simulatie::Simulatie(int newAantalKassas)
{
    aantalKassas = newAantalKassas;
}

Simulatie::~Simulatie()
{
    //dtor
}

void Simulatie::SimulatieRun(int aantalMaxNieuweKlanten, int aantalMaxVerwerken, int aantalRuns){

    Kassa* kassas = new Kassa[aantalKassas];

    for(int i = 0; i < aantalKassas; i++){
        Kassa temp(i + 1, aantalMaxNieuweKlanten, aantalMaxVerwerken);
        kassas[i] = temp;
    }
    for(int j = 0 ; j < aantalRuns; j++){
        cout << "tijd: " << j + 1 << endl;
        for(int i = 0; i < aantalKassas; i++){
            kassas[i].addRandomKlanten();
            kassas[i].removeRandomKlanten();
            kassas[i].printQueue();
        }
    }
    aantalRuns++;
}
