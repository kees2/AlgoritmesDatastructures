#include "XMLValidator.h"
#include <iostream>




XMLValidator::XMLValidator()
{
    //ctor
}

XMLValidator::~XMLValidator()
{
    //dtor
}

void XMLValidator::validate(char* input){
    int newThing;
    int aantal = getSize(input);
    string test;
    Queue que;
    Stack sck;

    for(int i = 0; i < aantal; i++){
        if(input[i] == '>'){
            newThing = 0;

            if(test == sck.peek()){
                cout << test << " is hetzelfde "<< endl;
                sck.pop();
            }else{
                //cout << test << endl;
                sck.push(test);
            }
            test = "";
        }
        else{
            if(newThing && input[i] != '/'){
                test = test + input[i];
            }
            if(input[i] == '<'){
                newThing = 1;
            }
        }


    }
    /*
    while(que.isEmpty()== 0){
        cout << que.remove();
    }*/
    //cout << test << endl;


}

int getSize (char * s) {
    char * t;
    for (t = s; *t != '\0'; t++)
        ;
    return t - s;
}
