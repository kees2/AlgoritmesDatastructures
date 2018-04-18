#ifndef NAWARRAY_HPP_INCLUDED
#define NAWARRAY_HPP_INCLUDED

#include "NAW.hpp"

using namespace std;

class NAWArray{


 private:

     NAW nawArray[20];
     int arraySize;



 public:


NAWArray();

int searchName(string searchNaam);
int searchAdres(string searchAdres);
int searchWoonplaats(string searchWoonplaats);
int searchAdresWoonplaats(string searchAdres, string searchWoonplaats);
int searchAdresWoonplaatsNaam(string searchAdres, string searchWoonplaats, string searchNaam);


void removeNaamFirst(string removeNaam);
void removeNaamLast(string removeNaam);
void removeNaamAll(string removeNaam);

void removeAdresWoonplaatsFirst(string removeAdres, string removeWoonplaats);
void removeAdresWoonplaatsAll(string removeAdres, string removeWoonplaats);
void print();
void addNAW(string newNaam, string newAdres, string newWoonplaats);

int searchNaw(string searchNaam, string searchAdres, string searchWoonplaats);
void removeNAW(string newNaam, string newAdres, string newWoonplaats);
void alterNAW(string oldNaam, string oldAdres, string oldWoonplaats, string newNaam, string newAdres, string newWoonplaats);
};

#endif // NAWARRAY_HPP_INCLUDED
