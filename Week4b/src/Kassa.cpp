#include "Kassa.h"

Kassa::Kassa(int nummer, int newMaxNieuweKlanten, int newMaxVerwerkKlanten)
{
    Queue queue();
    kassaNummer = nummer;
    maxNieuweKlanten = newMaxNieuweKlanten;
    maxVerwerkKlanten = newMaxVerwerkKlanten;
}

Kassa::Kassa()
{

}


Kassa::~Kassa()
{
    //dtor
}

void Kassa::setMaxNieuweKlanten(int aantal){
    maxNieuweKlanten = aantal;
}

void Kassa::setMaxVerwerkKlanten(int aantal){
    maxVerwerkKlanten = aantal;
}

void Kassa::setKlanten(int aantal){
    for(int i = 0; i < aantal; i++){
        if(queue.size() < queue.getMaxSize()){
             queue.insert("*");
        }
    }
}

void Kassa::addRandomKlanten(){
    srand(kassaNummer);
    int aantal = rand() % (maxNieuweKlanten + 1);
    setKlanten(aantal);
}

void Kassa::removeKlanten(int aantal){
    for(int i = 0; i < aantal; i++){
        if(queue.size() > 1){
            queue.remove();
        }
    }
}

void Kassa::removeRandomKlanten(){
    srand(kassaNummer);
    int aantal = rand() % (maxVerwerkKlanten + 1);
    removeKlanten(aantal);
}

void Kassa::printQueue(){
    int aantal = queue.size();
    cout << "Kassa " << kassaNummer << ": ";
    for(int i = 0; i < aantal; i++){
        cout << queue.peekFront();
    }
    cout << endl;
}

