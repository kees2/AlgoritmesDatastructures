#include <iostream>
#include "NAWArray.hpp"

using namespace std;

int main()
{
    NAWArray arjonArray;

    //arjonArray.print();
    arjonArray.addNAW("Kees", "Tjerk cafe", "den bosch");
    cout << arjonArray.searchNaw("Tjerk cafe","den bosch", "Kees" ) << endl;
    //arjonArray.print();
    return 0;
}
