#include <iostream>
#include "Queue.h"
#include "XMLValidator.h"

using namespace std;
#include <string>

int main()
{


   XMLValidator vali;
   char* searchText = "<persoon><naam>Donald Duck</naam><adres>Eendenplein 17</adres><woonplaats>Duckstad</woonplaats></persoon>";
   vali.validate(searchText);






    return 0;
}
