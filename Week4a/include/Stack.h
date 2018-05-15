#ifndef STACK_H
#define STACK_H

using namespace std;
#include <string>


class Stack
{
    public:
        Stack();
        virtual ~Stack();
        void push(string j);
        string pop();
        string peek();
        int isEmpty();


    protected:

    private:

    int maxSize;
    string stackArray[20];;
    int top;
};

#endif // STACK_H
