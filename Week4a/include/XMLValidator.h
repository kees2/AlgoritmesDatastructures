#ifndef XMLVALIDATOR_H
#define XMLVALIDATOR_H

#include "Queue.h"

class XMLValidator
{
    public:
        XMLValidator();
        virtual ~XMLValidator();
        void validate(char* input, int aantal);

    protected:

    private:
};

#endif // XMLVALIDATOR_H
