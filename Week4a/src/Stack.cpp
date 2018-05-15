#include "Stack.h"

Stack::Stack()
{
    top = 0;
}

Stack::~Stack()
{
    //dtor
}


void Stack::push(string j) // put item on top of stack
{
stackArray[++top] = j;
}

string Stack::pop() // take item from top of stack
{
return stackArray[top--];
}

string Stack::peek() // peek at top of stack
{
return stackArray[top];
}

int Stack::isEmpty() // true if stack is empty
{
return (top == -1);
}
