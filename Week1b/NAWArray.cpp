#include "NAWArray.hpp"
#include "NAW.hpp"

#include <iostream>

NAWArray::NAWArray(){
    arraySize = 10;
    /*for(int i = 0; i < 10; i++){
        nawArray[i] = NAW("Arjon", "Brabant", "Limburg");
        arraySize++;
    }*/
    nawArray[0] = NAW("Arjon0", "Brabant", "Limburg");
    nawArray[1] = NAW("Arjon1", "Brabant", "Limburg");
    nawArray[2] = NAW("Arjon2", "Brabant", "Limburg");
    nawArray[3] = NAW("Arjon3", "Brabant", "Limburg");
    nawArray[4] = NAW("Arjon4", "Brabant", "Limburg");
    nawArray[5] = NAW("Arjon5", "Brabant", "Limburg");
    nawArray[6] = NAW("Arjon6", "Brabant", "Limburg");
    nawArray[7] = NAW("Arjon0", "Brabant", "Limburg");
    nawArray[8] = NAW("Arjon8", "Brabant", "Limburg");
    nawArray[9] = NAW("Arjon0", "Brabantjon", "Limburg");

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

void NAWArray::removeNaamFirst(string removeNaam){
    int id;
    id = searchName(removeNaam);
    for(int i = id; i < arraySize; i++){
        nawArray[i].setNaam(nawArray[i + 1].getNaam());
        nawArray[i].setAdres(nawArray[i + 1].getAdres());
        nawArray[i].setWoonplaats(nawArray[i + 1].getWoonplaats());
        cout << i << " size: " << arraySize << endl;
    }
    arraySize--;
}

void NAWArray::removeNaamLast(string removeNaam){
    int id = 0;
    for(int i = arraySize; i >= 0; i--){
        if(nawArray[i].hasNaam(removeNaam)){
            id = i;
            cout << "Arjon has been found " << id << endl;
            break;
        }
    }

    for(int i = id; i < arraySize; i++){
        nawArray[i].setNaam(nawArray[i + 1].getNaam());
        nawArray[i].setAdres(nawArray[i + 1].getAdres());
        nawArray[i].setWoonplaats(nawArray[i + 1].getWoonplaats());
        cout << i << " size: " << arraySize << endl;
    }
    arraySize--;
}

void NAWArray::removeNaamAll(string removeNaam){
    int id = searchName(removeNaam);;
    while(id != -1){
        for(int i = id; i < arraySize; i++){
            if(id != arraySize -1){
                nawArray[i].setNaam(nawArray[i + 1].getNaam());
                nawArray[i].setAdres(nawArray[i + 1].getAdres());
                nawArray[i].setWoonplaats(nawArray[i + 1].getWoonplaats());
                cout << i << " size: " << arraySize << endl;
            }
        }
        arraySize--;
        id = searchName(removeNaam);
    }
}

void NAWArray::removeAdresWoonplaatsFirst(string removeAdres, string removeWoonplaats){
    int id = searchAdresWoonplaats(removeAdres, removeWoonplaats);

    for(int i = id; i < arraySize; i++){
        nawArray[i].setNaam(nawArray[i + 1].getNaam());
        nawArray[i].setAdres(nawArray[i + 1].getAdres());
        nawArray[i].setWoonplaats(nawArray[i + 1].getWoonplaats());
    }
    arraySize--;
}

void NAWArray::removeAdresWoonplaatsAll(string removeAdres, string removeWoonplaats){
    int id = searchAdresWoonplaats(removeAdres, removeWoonplaats);
    while(id != -1){
        for(int i = id; i < arraySize; i++){
            if(id != arraySize -1){
                nawArray[i].setNaam(nawArray[i + 1].getNaam());
                nawArray[i].setAdres(nawArray[i + 1].getAdres());
                nawArray[i].setWoonplaats(nawArray[i + 1].getWoonplaats());
                cout << i << " size: " << arraySize << endl;
            }
        }
        arraySize--;
        id = searchAdresWoonplaats(removeAdres, removeWoonplaats);
    }
}


void NAWArray::print(){
    for(int i = 0; i < arraySize; i++){
        cout << "index: " << i << ", naam: " << nawArray[i].getNaam() << ", adres: " << nawArray[i].getAdres() << ", woonplaats: " << nawArray[i].getWoonplaats() << endl;
    }
}

int NAWArray::searchNaw(string searchAdres, string searchWoonplaats, string searchNaam){
    int currentNawIndex = searchAdresWoonplaatsNaam(searchAdres, searchWoonplaats, searchNaam);
    int index = arraySize / 2;
    while(index < arraySize){
        int compare = nawArray[currentNawIndex].CompareTo(nawArray[index]);
        if(compare == 0){
            return index;
        }
        else if(compare < 0){
            index = index / 2;
        }
        else{
            index = index * 3 / 2;
        }

    }
    //return -1 als er geen naw gevonden is
    return -1;
}

void NAWArray::addNAW(string newNaam, string newAdres, string newWoonplaats){
    int index = searchNaw(newAdres,newWoonplaats, newNaam );
    NAW newNaw(newNaam, newAdres, newWoonplaats);
    nawArray[arraySize] = newNaw;
    arraySize++;

}






















