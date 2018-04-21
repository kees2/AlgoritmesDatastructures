#include "NAWArray.hpp"
#include "NAW.hpp"

#include <iostream>

NAWArray::NAWArray(){
    arraySize = 10;
    nawArray[0] = NAW("A_Naam", "A_Adres", "A_Woonplaats");
    nawArray[1] = NAW("B_Naam", "B_Adres", "B_Woonplaats");
    nawArray[2] = NAW("C_Naam", "C_Adres", "C_Woonplaats");
    nawArray[3] = NAW("D_Naam", "D_Adres", "D_Woonplaats");
    nawArray[4] = NAW("E_Naam", "E_Adres", "E_Woonplaats");
    nawArray[5] = NAW("F_Naam", "F_Adres", "F_Woonplaats");
    nawArray[6] = NAW("G_Naam", "G_Adres", "G_Woonplaats");
    nawArray[7] = NAW("H_Naam", "H_Adres", "H_Woonplaats");
    nawArray[8] = NAW("I_Naam", "I_Adres", "I_Woonplaats");
    nawArray[9] = NAW("J_Naam", "J_Adres", "J_Woonplaats");

}

int NAWArray::searchName(string searchNaam){
    for(int i = 0; i < arraySize; i++){
        if(nawArray[i].hasNaam(searchNaam)){
            return i;
        }
    }
    return -1;
}

int NAWArray::searchAdres(string searchAdres){
    for(int i = 0; i < arraySize; i++){
        if(nawArray[i].hasAdres(searchAdres)){
            return i;
        }
    }
    return -1;
}

int NAWArray::searchWoonplaats(string searchWoonplaats){
    for(int i = 0; i < arraySize; i++){
        if(nawArray[i].hasWoonplaats(searchWoonplaats)){
            return i;
        }
    }
    return -1;
}

int NAWArray::searchAdresWoonplaats(string searchAdres, string searchWoonplaats){
    for(int i = 0; i < arraySize; i++){
        if(nawArray[i].hasAdres(searchAdres) && nawArray[i].hasWoonplaats(searchWoonplaats)){
            return i;
        }
    }
    return -1;
}

int NAWArray::searchAdresWoonplaatsNaam(string searchAdres, string searchWoonplaats, string searchNaam){
    for(int i = 0; i < arraySize; i++){
        if(nawArray[i].hasAdres(searchAdres) && nawArray[i].hasWoonplaats(searchWoonplaats) && nawArray[i].hasNaam(searchNaam)){
            return i;
        }
    }
    return -1;
}

void NAWArray::print(){
    for(int i = 0; i < arraySize; i++){
        cout << "index: " << i << ", naam: " << nawArray[i].getNaam() << ", adres: " << nawArray[i].getAdres() << ", woonplaats: " << nawArray[i].getWoonplaats() << endl;
    }
}

int NAWArray::searchNaw(string searchNaam, string searchAdres, string searchWoonplaats){

    NAW tempNaw(searchNaam, searchAdres, searchWoonplaats);
    int min = 0;
    int max = arraySize - 1;
    int guess = 0;
    int compare = 0;
    int result = -1;

    while(max >= min){

        guess = (min + max) / 2;
        compare = tempNaw.CompareTo(nawArray[guess]);
        if(compare == 0){
            result = guess;
            break;
        }
        else if(compare < 0){
            max = guess -1;
        }
        else{
            min = guess + 1;
        }
        cout << guess << ", " << compare << ", " << max << ", " << min << endl;

    }
    //return -1 als er geen naw gevonden is
    return result;
}

void NAWArray::addNAW(string newNaam, string newAdres, string newWoonplaats){
    NAW newNaw(newNaam, newAdres, newWoonplaats);
    int i = arraySize - 1;
    cout << newNaw.CompareTo(nawArray[9]) << endl;
    for (i = arraySize - 1; ( i >= 0  && (newNaw.CompareTo(nawArray[i])) == -1); i--){
       nawArray[i + 1] = nawArray[i];
    }
    nawArray[i + 1] = newNaw;
    arraySize++;

}

void NAWArray::removeNAW(string newNaam, string newAdres, string newWoonplaats){

    int index = searchNaw(newNaam, newAdres, newWoonplaats);

    cout << "Index is " << index << endl;

    arraySize--;

    for(int i = index; i < arraySize ;i++){
        cout << i << endl;
        nawArray[i] = nawArray[i + 1];
    }
}

void NAWArray::alterNAW(string oldNaam, string oldAdres, string oldWoonplaats, string newNaam, string newAdres, string newWoonplaats){

    removeNAW(oldNaam, oldAdres, oldWoonplaats);
    addNAW(newNaam, newAdres, newWoonplaats);
}



















