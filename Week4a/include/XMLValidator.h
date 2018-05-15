#ifndef XMLVALIDATOR_H
#define XMLVALIDATOR_H

using namespace std;
#include <string>
#include "Queue.h"
#include "Stack.h"

class XMLValidator
{
    public:
        XMLValidator();
        virtual ~XMLValidator();
        void validate(char* input);

    protected:

    private:
};

int getSize (char * s);
#endif // XMLVALIDATOR_H
