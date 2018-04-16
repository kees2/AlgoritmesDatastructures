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
    /*
    if(strcmp(naam, searchNaam) == 0){
        return 1;
    }*/
    if(naam == searchNaam){
        return 1;
    }
    return 0;
}

bool NAW::hasAdres(string searchAdres){
    if(adres == searchAdres){
        return 1;
    }
    /*if(strcmp(adres, searchAdres) == 0){
        return 1;
    }*/
    return 0;
}

bool NAW::hasWoonplaats(string searchWoonplaats){
    if(woonplaats == searchWoonplaats){
        return 1;
    }
    /*if(strcmp(woonplaats, searchWoonplaats) == 0){
        return 1;
    }*/
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



