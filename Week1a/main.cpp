#include <iostream>

#include "NAWArray.hpp"

using namespace std;

int main()
{
    NAWArray arjonArray;

    arjonArray.print();
    arjonArray.removeAdresWoonplaatsAll("Brabant", "Limburg");
    arjonArray.print();

    //cout << arjonArray.searchName("Arjon5") << endl;

    return 0;
}
