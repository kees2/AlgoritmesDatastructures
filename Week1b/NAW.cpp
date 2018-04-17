#include "NAW.hpp"

#include <string.h>

NAW::NAW(string newNaam, string newAdres, string newWoonplaats){
    naam = newNaam;
    adres = newAdres;
    woonplaats = newWoonplaats;
}

NAW::NAW(){

}

NAW::~NAW(){

}

bool NAW::hasNaam(string searchNaam){

    if(naam == searchNaam){
        return 1;
    }
    return 0;
}

bool NAW::hasAdres(string searchAdres){
    if(adres == searchAdres){
        return 1;
    }

    return 0;
}

bool NAW::hasWoonplaats(string searchWoonplaats){
    if(woonplaats == searchWoonplaats){
        return 1;
    }

    return 0;
}





string NAW::getNaam(){
    return naam;
}

string NAW::getAdres(){
    return adres;
}

string NAW::getWoonplaats(){
    return woonplaats;
}

void NAW::setNaam(string newNaam){
    naam = newNaam;
}

void NAW::setAdres(string newAdres){
    adres = newAdres;
}

void NAW::setWoonplaats(string newWoonplaats){
    woonplaats = newWoonplaats;
}

int NAW::CompareTo(NAW rhsNaw)
 {
    int compare = woonplaats.compare(rhsNaw.getWoonplaats());
    if ( compare == 0 ){
        int compare = naam.compare(rhsNaw.getNaam());
        if(compare == 0){
            return adres.compare(rhsNaw.getAdres());
        }
        else {
            return compare;
        }
    }
    else
        return compare;
 }












