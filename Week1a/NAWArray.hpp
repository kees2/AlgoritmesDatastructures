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
void removeNaamFirst(string removeNaam);
void removeNaamLast(string removeNaam);
void removeNaamAll(string removeNaam);

void removeAdresWoonplaatsFirst(string removeAdres, string removeWoonplaats);
void removeAdresWoonplaatsAll(string removeAdres, string removeWoonplaats);
void print();

};

#endif // NAWARRAY_HPP_INCLUDED
