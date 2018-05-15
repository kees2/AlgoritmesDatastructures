#include "XMLValidator.h"
#include <iostream>
using namespace std;

XMLValidator::XMLValidator()
{
    //ctor
}

XMLValidator::~XMLValidator()
{
    //dtor
}

void XMLValidator::validate(char* input, int aantal){
    int newThing;
    Queue que;

    for(int i = 0; i < aantal; i++){
        if(input[i] == '>'){
            newThing = 0;
        }
        if(newThing && input[i] != '/'){
            que.insert(input[i]);
        }
        if(input[i] == '<'){
            newThing = 1;
        }

    }
    while(que.isEmpty()== 0){
        cout << que.remove();
    }


}
