#ifndef KASSA_H
#define KASSA_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include "Queue.h"

class Kassa
{
    public:
        Kassa(int nummer, int newMaxNieuweKlanten, int newMaxVerwerkKlanten);
        Kassa();
        virtual ~Kassa();

        void setMaxNieuweKlanten(int aantal);
        void setKlanten(int aantal);
        void setMaxVerwerkKlanten(int aantal);
        void printQueue();
        void removeKlanten(int aantal);

        void addRandomKlanten();
        void removeRandomKlanten();


    protected:

    private:
        int maxNieuweKlanten = 0;
        int Klanten = 0;
        int maxVerwerkKlanten = 0;
        int kassaNummer;
        Queue queue;


};

#endif // KASSA_H
