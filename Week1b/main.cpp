#include <iostream>
#include "NAWArray.hpp"

using namespace std;

int main()
{
    NAWArray arjonArray;

    //arjonArray.print();

    NAW nieuw("kees1", "a", "a");
    NAW nieuw2("kees2", "a", "a");

    int result = nieuw.CompareTo(nieuw2);

    cout << result << endl;


    //result = arjonArray.searchNaw("Arjon9", "Brabantie", "Limburg");

    //cout << result << endl;

    arjonArray.addNAW("Arjon4", "Brabant", "Limburg");
    //arjonArray.removeNAW("Arjon4", "Brabant", "Limburg");
    arjonArray.alterNAW("Arjon4", "Brabant", "Limburg", "Arjon999", "Brabant", "Limburg");
    arjonArray.print();

    //arjonArray.addNAW("Kees", "Tjerk cafe", "den bosch");
    //cout << arjonArray.searchNaw("Tjerk cafe","den bosch", "Kees" ) << endl;
    //arjonArray.print();
    return 0;
}
