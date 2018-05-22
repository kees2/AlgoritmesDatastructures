#ifndef SIMULATIE_H
#define SIMULATIE_H

#include "Kassa.h"

class Simulatie
{
    public:
        Simulatie(int newAantalKassas);
        virtual ~Simulatie();
        void SimulatieRun(int aantalMaxNieuweKlanten, int aantalMaxVerwerken,int aantalRuns);
    protected:

    private:

        int aantalKassas = 0;;

        int aantalRuns;
};

#endif // SIMULATIE_H
