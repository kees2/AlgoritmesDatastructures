#ifndef NAW_HPP_INCLUDED
#define NAW_HPP_INCLUDED

#include <string>


using namespace std;

class NAW {

 public:

     NAW(string newNaam, string newAdres, string newWoonplaats);
     NAW();
    ~NAW();

     bool hasNaam(string naam);
     bool hasAdres(string adres);
     bool hasWoonplaats(string woonplaats);


     string getNaam();
     string getAdres();
     string getWoonplaats();

    void setNaam(string newNaam);
    void setAdres(string newAdres);
    void setWoonplaats(string newWoonplaats);


    int CompareTo(NAW rhsNaw);

 private:

    string naam;
    string adres;
    string woonplaats;

};

#endif // NAW_HPP_INCLUDED
